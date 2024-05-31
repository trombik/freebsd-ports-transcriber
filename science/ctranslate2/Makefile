PORTNAME?=	ctranslate2
DISTVERSION=	4.3.0
CATEGORIES=	science

MAINTAINER=	y@trombik.org
COMMENT=	Fast inference engine for Transformer models

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS+= bash:shells/bash
LIB_DEPENDS+=libopenblas.so:math/openblas

USES=	compiler:c++17-lang cmake

USE_GITHUB=	yes
GH_TUPLE=	OpenNMT:CTranslate2:v${DISTVERSION}
GH_TUPLE+=	google:cpu_features:8a494eb:cpu_features/third_party/cpu_features
GH_TUPLE+=	NVIDIA:cutlass:bbe579a:cutlass/third_party/cutlass
GH_TUPLE+=	jarro2783:cxxopts:c74846a:cxxopts/third_party/cxxopts
GH_TUPLE+=	google:googletest:b7d472f:googletest/third_party/googletest
GH_TUPLE+=	google:ruy:363f252:ruy/third_party/ruy
GH_TUPLE+=	gabime:spdlog:76fb40d:spdlog/third_party/spdlog
GH_TUPLE+=	NVIDIA:thrust:d997cd3:thrust/third_party/thrust

CMAKE_ARGS+=	-DOPENMP_RUNTIME=COMP \
				-DWITH_OPENBLAS=ON \
				-DWITH_MKL=OFF

.include <bsd.port.mk>
