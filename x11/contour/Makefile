PORTNAME=	contour
DISTVERSION=	v0.3.0.198
CATEGORIES=	x11

MAINTAINER=	nsonack@outlook.com
COMMENT=	Modern Terminal Emulator
LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

USE_GITHUB=	yes
GH_ACCOUNT=	contour-terminal
GH_TAGNAME=	7363c10d
GH_TUPLE=	contour-terminal:libunicode:bcd20f35:contour/libunicode

BUILD_DEPENDS=	catch>0:devel/catch \
		microsoft-gsl>0:devel/microsoft-gsl \
		range-v3>0:devel/range-v3
LIB_DEPENDS=	libfmt.so:devel/libfmt \
		libfontconfig.so:x11-fonts/fontconfig \
		libfreetype.so:print/freetype2 \
		libharfbuzz.so:print/harfbuzz \
		libyaml-cpp.so:devel/yaml-cpp
USES=		cmake ncurses:port pkgconfig qt:5

USE_QT=		core gui network widgets buildtools_build qmake_build

CMAKE_ARGS+=	-DCONTOUR_TESTING=OFF \
		-DCPM_LOCAL_PACKAGES_ONLY:BOOL=true \
		-DCPM_USE_LOCAL_PACKAGES:BOOL=true \
		-DCRISPY_TESTING=OFF \
		-DLIBTERMINAL_TESTING=OFF
PLIST_FILES=	bin/contour \
		share/applications/contour.desktop \
		share/kservices5/ServiceMenus/contour-run.desktop \
		share/pixmaps/contour.png \
		share/terminfo/c/contour \
		share/terminfo/c/contour-latest

post-install:
.for f in Changelog.md LICENSE.txt README.md shell-integration.zsh
	${RM} ${STAGEDIR}${DATADIR}/${f}
.endfor
	${RMDIR} ${STAGEDIR}${DATADIR}

.include <bsd.port.mk>
