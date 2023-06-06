PORTNAME=	minimodem
DISTVERSION=	0.24-1
CATEGORIES=	sysutils
MAINTAINER=	nsonack@herrhotzenplotz.de

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

GNU_CONFIGURE=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	kamalmostafa
GH_TAGNAME=	${PORTNAME}-${DISTVERSION}

USES=		autoreconf

RUN_DEPENDS=	pulseaudio>0:audio/pulseaudio
LIB_DEPENDS=	libfftw3f.so:math/fftw3-float \
		libasound.so:audio/alsa-lib \
		libsndfile.so:audio/libsndfile


.include <bsd.port.mk>
