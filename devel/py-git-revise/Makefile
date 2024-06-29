PORTNAME=	git-revise
DISTVERSION=	0.7.0
CATEGORIES=	devel python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	nsonack@herrhotzenplotz.de
COMMENT=	Handy tool for doing efficient in-memory commit rebases & fixups
WWW=		https://github.com/mystor/git-revise

LICENSE=	MIT

# RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}click>=7.0.0:devel/py-click@${PY_FLAVOR} \
# 		${PYTHON_PKGNAMEPREFIX}colorama>=0.4.0:devel/py-colorama@${PY_FLAVOR} \
# 		${PYTHON_PKGNAMEPREFIX}gitpython>=3.0.0:devel/py-gitpython@${PY_FLAVOR} \
# 		${PYTHON_PKGNAMEPREFIX}termcolor>=1.1.0:devel/py-termcolor@${PY_FLAVOR}

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist concurrent distutils

.include <bsd.port.mk>
