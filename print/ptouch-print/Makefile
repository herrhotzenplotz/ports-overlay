PORTNAME=		ptouch-print
DISTVERSION=		1.5
DISTVERSIONPREFIX=	v
CATEGORIES=		print

MAINTAINER=		nsonack@herrhotzenplotz.de
COMMENT=		Brother PTouch Label Printer Tool
WWW=			https://dominic.familie-radermacher.ch/projekte/ptouch-print/
MASTER_SITES=		https://git.familie-radermacher.ch/linux/ptouch-print.git/

LICENSE=		GPLv3
LICENSE_FILE=		${WRKSRC}/COPYING

USES=			cmake pkgconfig jpeg gettext

FETCH_DEPENDS=		git:devel/git
LIB_DEPENDS +=		libgd.so:graphics/gd \
			libpng16.so:graphics/png

PLIST_FILES=		bin/ptouch-print \
			share/man/man1/ptouch-print.1.gz

CLONE_DIR=		${WRKDIR}/git-clone
do-fetch:
	@[ -d ${CLONE_DIR} ] || git clone ${MASTER_SITES} ${CLONE_DIR}
	@(cd ${CLONE_DIR} \
		&& git archive --format=tar.gz --prefix=${PORTNAME}-${DISTVERSIONPREFIX}${DISTVERSION}/ ${DISTVERSIONPREFIX}${DISTVERSION} \
			-o ${DISTDIR}/${DISTFILES})

.include <bsd.port.mk>
