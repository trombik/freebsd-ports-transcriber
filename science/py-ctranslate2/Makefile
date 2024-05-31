PORTNAME=	py-ctranslate2
DISTVERSION=	4.3.0
CATEGORIES=	science

MAINTAINER=	y@trombik.org
COMMENT=	Fast inference engine for Transformer models (python)

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/../LICENSE

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pybind11>0:devel/py-pybind11@${PY_FLAVOR}
RUN_DEPENDS=	${BUILD_DEPENDS}
LIB_DEPENDS=	libctranslate2.so:science/ctranslate2

USES=	python
USE_GITHUB=	yes
USE_PYTHON=	autoplist distutils
WRKSRC_SUBDIR=	python
GH_TUPLE=	OpenNMT:CTranslate2:v${DISTVERSION}

pre-build:
	@${REINPLACE_CMD} \
		-e 's|%%PREFIX%%|${PREFIX}|g' ${WRKSRC}/setup.py

.include <bsd.port.mk>
