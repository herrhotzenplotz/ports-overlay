PORTNAME=	quick-lint-js
DISTVERSION=	2.18.0
CATEGORIES=	devel

MAINTAINER=	nsonack@outlook.com
COMMENT=	Fast JavaScript Linter

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		cmake compiler:c++17-lang pkgconfig
USE_GITHUB=	yes
GH_ACCOUNT=	quick-lint

OPTIONS_DEFINE=		COMPLETION EDITOR
OPTIONS_DEFAULT=	EDITOR
EDITOR_DESC=		Install Emacs, Vim and NVim plugins
COMPLETION_DESC=	Install bash, fish and zsh completions

CMAKE_OFF=	BUILD_TESTING

PLIST_FILES=		bin/quick-lint-js \
			share/man/man1/quick-lint-js.1.gz \
			share/man/man5/quick-lint-js.config.5.gz \
			share/man/man8/quick-lint-js-lsp.8.gz \
			share/icons/hicolor/scalable/apps/com.quick_lint.quick_lint_js.svg
EDITOR_CMAKE_BOOL=	QUICK_LINT_JS_ENABLE_EDITORS \
			QUICK_LINT_JS_ENABLE_VSCODE
EDITOR_PLIST_FILES=	share/emacs/site-lisp/eglot-quicklintjs.el \
			share/emacs/site-lisp/flycheck-quicklintjs.el \
			share/emacs/site-lisp/flymake-quicklintjs.el \
			share/emacs/site-lisp/lsp-quicklintjs.el \
			share/nvim/site/ale_linters/javascript/quick_lint_js.vim \
			share/nvim/site/autoload/quick_lint_js_ale.vim \
			share/nvim/site/doc/quick-lint-js.txt \
			share/nvim/site/lua/lspconfig/quick_lint_js.lua \
			share/nvim/site/plugin/quick-lint-js.vim \
			share/vim/vimfiles/ale_linters/javascript/quick_lint_js.vim \
			share/vim/vimfiles/autoload/quick_lint_js_ale.vim \
			share/vim/vimfiles/doc/quick-lint-js.txt \
			share/vim/vimfiles/plugin/quick-lint-js.vim
COMPLETION_CMAKE_BOOL=	QUICK_LINT_JS_ENABLE_COMPLETIONS
COMPLETION_PLIST_FILES=	share/bash-completion/completions/quick-lint-js.bash \
			share/fish/vendor_completions.d/quick-lint-js.fish \
			share/zsh/site-functions/_quick-lint-js \
			share/zsh/vendor-completions/_quick-lint-js

post-install:
	${RM} ${STAGEDIR}${LOCALBASE}/share/metainfo/com.quick_lint.quick_lint_js.metainfo.xml
	${RMDIR} ${STAGEDIR}${LOCALBASE}/share/metainfo

post-install-COMPLETION-on:
	${RM} ${STAGEDIR}${LOCALBASE}/share/powershell/completions/quick-lint-js.ps1
	${RMDIR} ${STAGEDIR}${LOCALBASE}/share/powershell/completions
	${RMDIR} ${STAGEDIR}${LOCALBASE}/share/powershell

.include <bsd.port.mk>
