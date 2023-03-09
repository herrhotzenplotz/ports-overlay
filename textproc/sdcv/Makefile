PORTNAME=		sdcv
PORTVERSION=		0.5.4
DISTVERSIONPREFIX=	v
CATEGORIES=		textproc

MAINTAINER=		nsonack@herrhotzenplotz.de
COMMENT=		Text Based Utility for working with Dictionaries in StarDict format
WWW=			https://github.com/Dushistov/sdcv

LICENSE=		GPLv2
LICENSE_FILE=		${WRKSRC}/LICENSE

USES=			compiler:c++11-lang cmake gnome pkgconfig
USE_CXXSTD=		c++11
USE_GNOME=		glib20

USE_GITHUB=		yes
GH_ACCOUNT=		Dushistov

CMAKE_OFF=		ENABLE_NLS WITH_READLINE

PLIST_FILES=		bin/sdcv \
			share/man/man1/sdcv.1.gz \
			share/man/uk/man1/sdcv.1.gz


post-extract:
	${RM} ${WRKSRC}/cmake/FindGLIB2.cmake

.include <bsd.port.mk>

