PORTNAME=	whisper_ctranslate2
DISTVERSION=	0.4.7
CATEGORIES=	misc python
MASTER_SITES=	https://files.pythonhosted.org/packages/7b/cc/00a1d322017330fa0103bacfd5617d1bf018fb27e4b4c7f2f213de77bed5/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTFILES=	${DISTNAME}${EXTRACT_SUFX}

MAINTAINER=	y@trombik.org
COMMENT=	Whisper command line client based on faster-whisper

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	\
	${PYTHON_PKGNAMEPREFIX}ctranslate2>0:science/py-ctranslate2@${PY_FLAVOR} \
	${PYTHON_PKGNAMEPREFIX}tqdm>0:misc/py-tqdm@${PY_FLAVOR} \
	${PYTHON_PKGNAMEPREFIX}numpy>0:math/py-numpy@${PY_FLAVOR} \
	${PYTHON_PKGNAMEPREFIX}faster-whisper>=1.0.3:misc/py-faster-whisper@${PY_FLAVOR} \
	${PYTHON_PKGNAMEPREFIX}sounddevice>=0.5.0:audio/py-sounddevice@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils

pre-configure:
	${CP} ${FILESDIR}/requirements.txt ${WRKSRC}

.include <bsd.port.mk>
