PORTNAME=	pyopenjtalk_dict
DISTVERSION=	0.3.4.dev2
CATEGORIES=	audio
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	y@trombik.org
COMMENT=	Python wrapper for forked OpenJTalk

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

BUILD_DEPENDS=	cmake:devel/cmake-core \
				${PYTHON_PKGNAMEPREFIX}numpy>=1.25.0:math/py-numpy@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}numpy>=1.25.0:math/py-numpy@${PY_FLAVOR}

USES=	python
USE_GITHUB=	yes
USE_PYTHON=	autoplist distutils cython

# XXX the author did not tag the release.
GH_TUPLE+=	litagin02:pyopenjtalk:524e331
GH_TUPLE+=	r9y9:open_jtalk:aade593:open_jtalk/lib/open_jtalk
GH_TUPLE+=	syoyo:hts_engine_API:2821c7a:hts_engine_API/lib/hts_engine_API

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/python*.*/site-packages/pyopenjtalk/*.cpython-*.so


.include <bsd.port.mk>
