PORTNAME=		kcollectd
PORTVERSION=		0.12.2
DISTVERSIONPREFIX=	v
CATEGORIES=		net
MAINTAINER=		nsonack@herrhotzenplotz.de
COMMENT=		graphical front-end to collectd

USE_GITLAB=	yes
GL_ACCOUNT=	aerusso
GL_COMMIT=	527fdd044de71b732292c922b8581f154be53ac9

LIB_DEPENDS=	libboost_filesystem.so.1:devel/boost-libs

USES=	cmake kde:5 qt:5

# USE_QT=		core

USE_KDE=	ecm config coreaddons doctools guiaddons kio \
		i18n xmlgui iconthemes widgetsaddons

.include <bsd.port.mk>
