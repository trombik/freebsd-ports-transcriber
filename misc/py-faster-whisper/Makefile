PORTNAME=	faster-whisper
DISTVERSION=	1.0.3
CATEGORIES=	misc python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	y@trombik.org
COMMENT=	Faster Whisper transcription with CTranslate2
WWW=	https://github.com/SYSTRAN/faster-whisper

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libctranslate2.so:science/ctranslate2
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}tqdm>0:misc/py-tqdm@${PY_FLAVOR} \
	${PYTHON_PKGNAMEPREFIX}av>0:multimedia/py-av@${PY_FLAVOR} \
	${PYTHON_PKGNAMEPREFIX}py-onnxruntime>0:science/py-onnxruntime@${PY_FLAVOR} \
	${PYTHON_PKGNAMEPREFIX}huggingface-hub>0:misc/py-huggingface-hub@${PY_FLAVOR} \
	${PYTHON_PKGNAMEPREFIX}tokenizers>0:textproc/py-tokenizers@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
