PORTNAME=	sapling-scm
DISTVERSION=	0.2.20230523-092610+f12b7eee
CATEGORIES=	devel

MAINTAINER=	nsonack@herrhotzenplotz.de
COMMENT=	Sapling Source Control System

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		compiler:c++17-lang terminfo gmake python:3.7+ shebangfix cargo
USE_GITHUB=	yes
GH_ACCOUNT=	facebook
GH_PROJECT=	sapling

SHEBANG_FILES=	eden/scm/setup.py

CARGO_CARGOTOML=	${WRKSRC}/eden/scm/Cargo.toml
CARGO_CARGOLOCK=	${WRKSRC}/eden/scm/Cargo.lock

# .include "Makefile.crates"

BUILD_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}cython>0:lang/cython@${PY_FLAVOR}

do-build:
	${SETENV} SAPLING_OFFLINE=1 ${MAKE_CMD} -C ${WRKSRC}/eden/scm oss

post-patch:
	@${REINPLACE_CMD} -e "s|^PYTHON3 := python3$$|PYTHON3:=${PYTHON_CMD}|g" ${WRKSRC}/eden/scm/Makefile

.include <bsd.port.mk>
