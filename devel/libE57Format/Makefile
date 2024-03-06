PORTNAME=	libE57Format
DISTVERSION=	3.1.1
DISTVERSIONPREFIX=	v
CATEGORIES=	devel

MAINTAINER=	nsonack@herrhotzenplotz.de
COMMENT=	C++ Library for working with E57 point cloud files
WWW=		https://github.com/asmaloney/libE57Format

LICENSE=	BSL
LICENSE_FILE=	${WRKSRC}/LICENSE.md

LIB_DEPENDS=	libxerces-c-3.2.so:textproc/xerces-c3

USES=		cmake compiler:c++17-lang

USE_GITHUB=	yes
GH_ACCOUNT=	asmaloney

PLIST_FILES=

TEST_TARGET=	test

CMAKE_OFF=	E57_BUILD_TEST
CMAKE_ON=	E57_BUILD_SHARED

.include <bsd.port.mk>
