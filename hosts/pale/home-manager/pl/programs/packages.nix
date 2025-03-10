{ config, pkgs, ... }:

{
  home.packages = with pkgs; [
    ansible
    ansible-lint
    acpi
    arc-icon-theme
    bat
    cmus
    dmenu
    docker-compose
    eza
    fasd
    nerd-fonts.fira-code
    firefox
    fzf
    gh
    gh-f
    gh-s
    git
    gitui
    gnumake
    go
    google-chrome
    gpick
    jetbrains-mono
    jq
    kdePackages.breeze-gtk
    lua
    maim
    neovim
    nodePackages.prettier
    nodePackages.typescript-language-server
    nodejs_22
    pass
    playerctl
    ranger
    ripgrep
    signal-desktop
    starship
    tldr
    tmux
    tree
    typescript
    unclutter-xfixes
    universal-ctags
    which
    xclip
    xdotool
    xorg.xev
    xorg.xset
    freeplane
    home-assistant-cli
    yubikey-manager
    nixd
    nixpkgs-fmt
    # cargo
    # rust-analyzer
    # rustc
    # rustfmt
    rustup
    oterm
    zoxide
    sesh
    vscode-langservers-extracted
    simplescreenrecorder
    zellij
    wmctrl
    tokei
  ];
}
