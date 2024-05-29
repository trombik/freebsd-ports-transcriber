PORTNAME?=	onnxruntime
DISTVERSION=	1.18.0
CATEGORIES=	science
.if defined(ONNX_PY)
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
.endif

MAINTAINER=	y@trombik.org
COMMENT=	High performance ML inferencing and training accelerator

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS+=	gpatch:devel/patch \
	bash:shells/bash \
	cmake:devel/cmake-core \
	${PYTHON_PKGNAMEPREFIX}numpy>0:math/py-numpy@${PY_FLAVOR}
.if defined(ONNX_PY)
BUILD_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}wheel>0:devel/py-wheel@${PY_FLAVOR}
LIB_DEPENDS=	libonnxruntime.so:science/onnxruntime
.endif

USES=	compiler:c++11-lang python:3.9+
.if defined(ONNX_PY)
USE_PYTHON=	pep517 autoplist
PLIST=
.endif

USE_GITHUB=	yes
USE_GITLAB=	nodefault
GH_TUPLE+=	microsoft:onnxruntime:v${DISTVERSION}

# git submodules
GH_TUPLE+=	onnx:onnx:990217f:onnx_sub1/cmake/external/onnx
GH_TUPLE+=	google:libprotobuf-mutator:7a2ed51:onnx_sub2/cmake/external/libprotobuf-mutator
GH_TUPLE+=	emscripten-core:emsdk:d52c465:onnx_sub3/cmake/external/emsdk

ONNX_ABSEIL_FILE=	20230125.3.tar.gz
ONNX_ABSEIL_SHA1=	e21faa0de5afbbf8ee96398ef0ef812daf416ad8
ONNX_PROTOBUF_FILE=	protobuf-22.3.tar.gz
ONNX_PROTOBUF_SHA1=	310938afea334b98d7cf915b099ec5de5ae3b5c5
MASTER_SITES+=	https://github.com/abseil/abseil-cpp/archive/refs/tags/:Abseil
DISTFILES+=	${ONNX_ABSEIL_FILE}:Abseil
MASTER_SITES+=	https://github.com/protocolbuffers/protobuf/releases/download/v22.3/:Protobuf
DISTFILES+=	${ONNX_PROTOBUF_FILE}:Protobuf

GH_TUPLE+=      abseil:abseil-cpp:20240116.0:abseil_cpp
GH_TUPLE+=      apple:coremltools:7.1:coremltools
GH_TUPLE+=      boostorg:mp11:boost-1.82.0:mp11
GH_TUPLE+=      dcleblanc:SafeInt:3.0.28:safeint
GH_TUPLE+=      dmlc:dlpack:v0.6:dlpack
GH_TUPLE+=      google:benchmark:v1.8.3:google_benchmark
GH_TUPLE+=      google:flatbuffers:v23.5.26:flatbuffers
GH_TUPLE+=      google:googletest:530d5c8c84abd2a46f38583ee817743c9b3a42b4:googletest
GH_TUPLE+=      google:nsync:1.26.0:google_nsync
GH_TUPLE+=      google:re2:2022-06-01:re2
GH_TUPLE+=      google:XNNPACK:0da379fc4808f9601faef392352018c741c0f297:googlexnnpack
GH_TUPLE+=      HowardHinnant:date:v3.0.1:date
GH_TUPLE+=      intel:neural-speed:v0.3:neural_speed
GH_TUPLE+=      jarro2783:cxxopts:3c73d91c0b04e2b59462f0a741be8c07024c1bc0:cxxopts
GH_TUPLE+=      Maratyszcza:FP16:0a92994d729ff76a58f692d3028ca1b64b145d91:fp16
GH_TUPLE+=      Maratyszcza:FXdiv:63058eff77e11aa15bf531df5dd34395ec3017c8:fxdiv
GH_TUPLE+=      Maratyszcza:psimd:072586a71b55b7f8c584153d223e95687148a900:psimd
GH_TUPLE+=      Maratyszcza:pthreadpool:4fe0e1e183925bf8cfa6aae24237e724a96479b8:pthreadpool
GH_TUPLE+=      microsoft:DirectX-Headers:v1.613.1:directx_headers
GH_TUPLE+=      microsoft:GSL:v4.0.0:microsoft_gsl
GH_TUPLE+=      microsoft:mimalloc:v2.1.1:mimalloc
GH_TUPLE+=      microsoft:onnxruntime-extensions:94142d8391c9791ec71c38336436319a2d4ac7a0:extensions
GH_TUPLE+=      microsoft:wil:v1.0.230629.1:microsoft_wil
GH_TUPLE+=      nlohmann:json:v3.10.5:json
GH_TUPLE+=      NVIDIA:cutlass:v3.1.0:cutlass
GH_TUPLE+=      onnx:onnx-tensorrt:eb43908b02a296ea0594432f06e9d3fac288d672:onnx_tensorrt
GH_TUPLE+=      onnx:onnx:v1.16.0:onnx
GH_TUPLE+=      protocolbuffers:utf8_range:72c943dea2b9240cd09efde15191e144bc7c7d38:utf8_range
GH_TUPLE+=      pybind:pybind11:v2.10.1:pybind11
GH_TUPLE+=      pytorch:cpuinfo:959002f82d7962a473d8bf301845f2af720e0aa4:pytorch_cpuinfo
GH_TUPLE+=      ROCmSoftwarePlatform:composable_kernel:5356c4a943a35e74d7cdc69486afcb8703b9a59a:composable_kernel
GH_TUPLE+=      tensorflow:tensorboard:373eb09e4c5d2b3cc2493f0949dc4be6b6a45e81:tensorboard
GL_TUPLE+=      libeigen:eigen:e7248b26a1ed53fa030c5c459f7ea095dfd276ac:eigen
DISTFILES+=	protoc-21.12-linux-aarch_64.zip:protoc_linux_aarch64
DISTFILES+=	protoc-21.12-linux-x86_32.zip:protoc_linux_x86
DISTFILES+=	protoc-21.12-linux-x86_64.zip:protoc_linux_x64
DISTFILES+=	protoc-21.12-osx-universal_binary.zip:protoc_mac_universal
DISTFILES+=	protoc-21.12-win32.zip:protoc_win32
DISTFILES+=	protoc-21.12-win64.zip:protoc_win64
DISTFILES+=	v21.12.zip:protobuf
MASTER_SITES+=	https://github.com/protocolbuffers/protobuf/archive/refs/tags/:protobuf
MASTER_SITES+=	https://github.com/protocolbuffers/protobuf/releases/download/v21.12/:protoc_linux_aarch64
MASTER_SITES+=	https://github.com/protocolbuffers/protobuf/releases/download/v21.12/:protoc_linux_x64
MASTER_SITES+=	https://github.com/protocolbuffers/protobuf/releases/download/v21.12/:protoc_linux_x86
MASTER_SITES+=	https://github.com/protocolbuffers/protobuf/releases/download/v21.12/:protoc_mac_universal
MASTER_SITES+=	https://github.com/protocolbuffers/protobuf/releases/download/v21.12/:protoc_win32
MASTER_SITES+=	https://github.com/protocolbuffers/protobuf/releases/download/v21.12/:protoc_win64

ONNX_CMAKE_DEFINES=	onnxruntime_BUILD_UNIT_TESTS=OFF \
					FETCHCONTENT_TRY_FIND_PACKAGE_MODE=NEVER \
					CMAKE_VERBOSE_MAKEFILE=ON \
					CMAKE_INSTALL_PREFIX=${PREFIX}
ONNX_BUILD_FLAGS=	--config Release \
					--skip_submodule_sync \
					--build_shared_lib \
					--enable_pybind \
					--skip_tests \
					--skip_onnx_tests \
					--build \
					--parallel ${MAKE_JOBS_NUMBER} \
					--skip_submodule_sync \
					--update \
					--allow_running_as_root \
					--cmake_extra_defines ${ONNX_CMAKE_DEFINES}
.if defined(ONNX_PY)
ONNX_BUILD_FLAGS+= --build_wheel
PEP517_INSTALL_CMD?=	${PYTHON_CMD} -m installer --destdir ${STAGEDIR} --prefix ${PREFIX} ${BUILD_WRKSRC}/dist/${PORTNAME:C|py-||}-${DISTVERSION}*.whl
.endif

post-patch:
	@${REINPLACE_CMD} \
		-e 's|python3|${PYTHON_CMD}|' \
		-e 's|^#!/bin/bash|#!${LOCALBASE}/bin/bash|' ${WRKSRC}/build.sh
	@${REINPLACE_CMD} \
		-e 's|%%DISTDIR%%|${DISTDIR}|' ${WRKSRC}/cmake/deps.txt
	@${REINPLACE_CMD} \
		-e 's|%%LOCALBASE%%|${LOCALBASE}|' ${WRKSRC}/cmake/CMakeLists.txt
	@${REINPLACE_CMD} \
		-e 's|%%LOCALBASE%%|${LOCALBASE}|' \
		-e 's|%%ONNX_PROTOBUF_FILE%%|${ONNX_PROTOBUF_FILE}|' \
		-e 's|%%ONNX_PROTOBUF_SHA1%%|${ONNX_PROTOBUF_SHA1}|' \
		-e 's|%%ONNX_ABSEIL_FILE%%|${ONNX_ABSEIL_FILE}|' \
		-e 's|%%ONNX_ABSEIL_SHA1%%|${ONNX_ABSEIL_SHA1}|' \
		-e 's|%%DISTDIR%%|${DISTDIR}|' \
		${WRKSRC}/cmake/patches/onnx/onnx.patch

.if defined(ONNX_PY)
do-build:
	(cd ${WRKSRC} && ./build.sh ${ONNX_BUILD_FLAGS})
	${MKDIR} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}
	${MV} ${WRKSRC}/build/Linux/Release/dist ${WRKSRC}

do-install:
	# XXX as PORTNAME used with strip_RECORD.py cannot be changed, the install
	# target is stolen from Mk/Uses/python.mk
	@${MKDIR} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}
	cd ${INSTALL_WRKSRC} && ${SETENVI} ${WRK_ENV} ${MAKE_ENV} ${PEP517_INSTALL_CMD}
	@${PYTHON_CMD} -B ${PORTSDIR}/Mk/Scripts/strip_RECORD.py \
		${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/${PORTNAME:C|py-||}-${DISTVERSION}*.dist-info/RECORD >> ${_PYTHONPKGLIST}
	@${REINPLACE_CMD} \
		-e '/\.pyc$$/d' \
		-e 's|^|${PYTHONPREFIX_SITELIBDIR}/|' \
		-e 's|^${PYTHONPREFIX_SITELIBDIR}/../../../etc/|etc/|' \
		-e 's|^${PYTHONPREFIX_SITELIBDIR}/../../../bin/|bin/|' \
		-e 's|^${PYTHONPREFIX_SITELIBDIR}/../../../include/|include/|' \
		-e 's|^${PYTHONPREFIX_SITELIBDIR}/../../../lib/|lib/|' \
		-e 's|^${PYTHONPREFIX_SITELIBDIR}/../../../libdata/|libdata/|' \
		-e 's|^${PYTHONPREFIX_SITELIBDIR}/../../../libexec/|libexec/|' \
		-e 's|^${PYTHONPREFIX_SITELIBDIR}/../../../man/|man/|' \
		-e 's|^${PYTHONPREFIX_SITELIBDIR}/../../../sbin/|sbin/|' \
		-e 's|^${PYTHONPREFIX_SITELIBDIR}/../../../share/|share/|' \
			${_PYTHONPKGLIST}
	@cd ${STAGEDIR}${PREFIX} && ${FIND} lib -name '*.pyc' >> ${_PYTHONPKGLIST}
.else
do-build:
	(cd ${WRKSRC} && ./build.sh ${ONNX_BUILD_FLAGS})

do-install:
	(cd ${WRKSRC}/build/Linux/Release && ${SETENVI} DESTDIR=${STAGEDIR} ${LOCALBASE}/bin/cmake -P cmake_install.cmake)
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libonnxruntime_providers_shared.so
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libonnxruntime.so.*
.endif

.include <bsd.port.mk>
