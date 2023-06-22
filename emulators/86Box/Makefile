PORTNAME=	86Box
DISTVERSION=	3.11
DISTVERSIONPREFIX=	v
MAINTAINER=	nsonack@herrhotzenplotz.de
CATEGORIES=	emulators

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USE_GITHUB=	yes
GH_ACCOUNT=	86Box

USES=		cmake qt:5 sdl pkgconfig:build gnome openal

USE_SDL=	sdl2
USE_GNOME=	glib20
USE_QT=		buildtools core qmake widgets opengl linguist gui network

CMAKE_OFF+=	FLUIDSYNTH RTMIDI

# TODO: Remove the evdev-proto dependency once we got the upstream bug resolved
BUILD_DEPENDS=	evdev-proto>0:devel/evdev-proto
LIB_DEPENDS+=	libfreetype.so:print/freetype2 \
		libevdev.so:devel/libevdev

PLIST_FILES=	bin/86Box

.include <bsd.port.mk>
