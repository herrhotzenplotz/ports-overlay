PORTNAME=		geomyidae
PORTVERSION=		0.96
DISTVERSIONPREFIX=	v
MASTER_SITES=		ftp://ftp@bitreich.org/releases/${PORTNAME}/
CATEGORIES=		net www
MAINTAINER=		nsonack@herrhotzenplotz.de
COMMENT=		Gopher server with TLS support

LIB_DEPENDS=		libtls.so:security/libressl

post-install:
	${STRIP_CMD} ${STAGEDIR}${LOCALBASE}/bin/geomyidae
	${CP} files/geomyidae_rc_script ${STAGEDIR}${LOCALBASE}/etc/rc.d/${PORTNAME}

.include <bsd.port.mk>
