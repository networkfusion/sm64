#!/usr/bin/env python3

def add_custom_arguments(parser):
    group = parser.add_mutually_exclusive_group(required=False)
    group.add_argument('-j', dest='lang', action='store_const', const='jp',
            help="Set version to JP.")
    group.add_argument('-u', dest='lang', action='store_const', const='us',
            help="Set version to US.")
    group.add_argument('-e', dest='lang', action='store_const', const='eu',
            help="Set version to EU.")
    group.add_argument('-s', dest='lang', action='store_const', const='sh',
            help="Set version to SH.")
    group.add_argument('--jpu', dest='lang', action='store_const', const='jpu',
            help="Set version to JPU.")
    group.add_argument('--usu', dest='lang', action='store_const', const='usu',
            help="Set version to USU.")
    group.add_argument('--euu', dest='lang', action='store_const', const='euu',
            help="Set version to EUU.")
    group.add_argument('--shu', dest='lang', action='store_const', const='shu',
            help="Set version to SHU.")

def apply(config, args):
    lang = args.lang or 'us'
    config['mapfile'] = f'build/{lang}/sm64.{lang}.map'
    config['myimg'] = f'build/{lang}/sm64.{lang}.z64'
    
    if len(lang) == 2:
        config['baseimg'] = f'baserom.{lang}.z64'
    else:
        config['baseimg'] = f'baserom.{lang[:-1]}.z64'
    
    config['makeflags'] = [f'VERSION={lang}']
    config['source_directories'] = ['src', 'include', 'lib', 'lib/src', 'asm', 'rsp']
