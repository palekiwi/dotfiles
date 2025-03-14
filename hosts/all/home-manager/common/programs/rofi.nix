{ config, pkgs, ... }:

{
    programs.rofi = {
        enable = true;
        package = pkgs.rofi;
        theme = ../../../config/rofi/dark_theme.rasi;
        plugins = [ pkgs.rofi-calc ];
        extraConfig = {
          matching = "normal"; # normal, regex, glob, fuzy, prefix
        };
    };

    home.packages = with pkgs; [
        rofi-calc
        rofi-pass
    ];
}
