PORTNAME=	contour
DISTVERSIONPREFIX=	v
DISTVERSION=	0.5.0.7168
CATEGORIES=	x11

MAINTAINER=	nsonack@herrhotzenplotz.de
COMMENT=	Modern C++ Terminal Emulator
WWW=		https://contour-terminal.org/

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

LIB_DEPENDS=	libfontconfig.so:x11-fonts/fontconfig \
		libfreetype.so:print/freetype2 \
		libharfbuzz.so:print/harfbuzz \
		libssh2.so:security/libssh2 \
		libyaml-cpp.so:devel/yaml-cpp

BUILD_DEPENDS=	${LOCALBASE}/include/fmt/format.h:devel/libfmt \
		${LOCALBASE}/include/gsl/gsl:devel/microsoft-gsl \
		${LOCALBASE}/include/range/v3/range.hpp:devel/range-v3 \
		${LOCALBASE}/share/unicode/ucd/UnicodeData.txt:textproc/UCD

USES=		cmake compiler:c++20-lang desktop-file-utils gl pkgconfig qt:6
USE_GITHUB=	yes
USE_XORG=	xcb
USE_QT=		5compat base declarative multimedia
USE_GL=		opengl

GH_ACCOUNT=	contour-terminal
GH_PROJECT=	libunicode:libunicode boxed-cpp:boxed
GH_TAGNAME=	28aacf5191450775f1f336aba1d6b65673b0ba9f:libunicode \
		v1.4.2:boxed
GH_SUBDIR=	_deps/sources/libunicode:libunicode \
		_deps/sources/boxed_cpp:boxed

CMAKE_ARGS=	-DLIBUNICODE_UCD_DIR=${LOCALBASE}/share/unicode/ucd

post-patch:
# Hack in libunicode and boxed-cpp without calling the install-deps script
	${MKDIR} ${WRKSRC}/_deps/sources
	@echo "macro(ContourThirdParties_Embed_libunicode)" >> ${WRKSRC}/_deps/sources/CMakeLists.txt
	@echo "    add_subdirectory(\$${ContourThirdParties_SRCDIR}/libunicode EXCLUDE_FROM_ALL)" >> ${WRKSRC}/_deps/sources/CMakeLists.txt
	@echo "endmacro()" >> ${WRKSRC}/_deps/sources/CMakeLists.txt
	@echo "macro(ContourThirdParties_Embed_boxed_cpp)" >> ${WRKSRC}/_deps/sources/CMakeLists.txt
	@echo "    add_subdirectory(\$${ContourThirdParties_SRCDIR}/boxed_cpp EXCLUDE_FROM_ALL)" >> ${WRKSRC}/_deps/sources/CMakeLists.txt
	@echo "endmacro()" >> ${WRKSRC}/_deps/sources/CMakeLists.txt

post-install:
	${RM} ${STAGEDIR}${DATADIR}/LICENSE.txt
	${RM} ${STAGEDIR}${DATADIR}/README.md

.include <bsd.port.mk>
