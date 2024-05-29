PORTNAME=	onnxruntime
DISTVERSION=	1.18.0
CATEGORIES=	science

MAINTAINER==	y@trombik.org
COMMENT=	Cross-platform, high performance ML inferencing and training accelerator

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	gpatch:devel/patch \
	bash:shells/bash \
	devel/abseil

USES=	python cmake compiler:c++11-lang python:3.9+
USE_GITHUB=	yes
GH_ACCOUNT=	microsoft
GH_PROJECT=	${PORTNAME}
GH_TAGNAME=	v${DISTVERSION}

BINARY_ALIAS=	patch=gpatch \
				python3=${PYTHON_CMD}
post-patch:
	@${REINPLACE_CMD} -e \
		's|^#!/bin/bash|#!${LOCALBASE}/bin/bash|' ${WRKSRC}/build.sh

do-build:
	(cd ${WRKSRC} && \
		./build.sh --config RelWithDebInfo --build_shared_lib --parallel \
			--compile_no_warning_as_error --skip_submodule_sync \
			--allow_running_as_root)

.include <bsd.port.mk>
