#include <selinux/selinux.h>
#include "dso.h"

hidden_proto(selinux_mkload_policy)
    hidden_proto(set_selinuxmnt)
    hidden_proto(security_disable)
    hidden_proto(security_policyvers)
    hidden_proto(security_load_policy)
    hidden_proto(security_get_boolean_active)
    hidden_proto(security_get_boolean_names)
    hidden_proto(security_set_boolean)
    hidden_proto(security_commit_booleans)
    hidden_proto(security_check_context)
    hidden_proto(security_check_context_raw)
    hidden_proto(security_canonicalize_context)
    hidden_proto(security_canonicalize_context_raw)
    hidden_proto(security_compute_av)
    hidden_proto(security_compute_av_raw)
    hidden_proto(security_compute_user)
    hidden_proto(security_compute_user_raw)
    hidden_proto(security_compute_create)
    hidden_proto(security_compute_create_raw)
    hidden_proto(security_compute_member_raw)
    hidden_proto(security_compute_relabel_raw)
    hidden_proto(is_selinux_enabled)
    hidden_proto(is_selinux_mls_enabled)
    hidden_proto(freecon)
    hidden_proto(freeconary)
    hidden_proto(getprevcon)
    hidden_proto(getprevcon_raw)
    hidden_proto(getcon)
    hidden_proto(getcon_raw)
    hidden_proto(setcon_raw)
    hidden_proto(getpeercon_raw)
    hidden_proto(getpidcon_raw)
    hidden_proto(getexeccon_raw)
    hidden_proto(getfilecon)
    hidden_proto(getfilecon_raw)
    hidden_proto(lgetfilecon_raw)
    hidden_proto(fgetfilecon_raw)
    hidden_proto(setfilecon_raw)
    hidden_proto(lsetfilecon_raw)
    hidden_proto(fsetfilecon_raw)
    hidden_proto(setexeccon)
    hidden_proto(setexeccon_raw)
    hidden_proto(getfscreatecon_raw)
    hidden_proto(getkeycreatecon_raw)
    hidden_proto(getsockcreatecon_raw)
    hidden_proto(setfscreatecon_raw)
    hidden_proto(setkeycreatecon_raw)
    hidden_proto(setsockcreatecon_raw)
    hidden_proto(security_getenforce)
    hidden_proto(security_setenforce)
    hidden_proto(selinux_binary_policy_path)
    hidden_proto(selinux_default_context_path)
    hidden_proto(selinux_securetty_types_path)
    hidden_proto(selinux_failsafe_context_path)
    hidden_proto(selinux_removable_context_path)
    hidden_proto(selinux_file_context_path)
    hidden_proto(selinux_file_context_homedir_path)
    hidden_proto(selinux_file_context_local_path)
    hidden_proto(selinux_netfilter_context_path)
    hidden_proto(selinux_homedir_context_path)
    hidden_proto(selinux_user_contexts_path)
    hidden_proto(selinux_booleans_path)
    hidden_proto(selinux_customizable_types_path)
    hidden_proto(selinux_media_context_path)
    hidden_proto(selinux_x_context_path)
    hidden_proto(selinux_path)
    hidden_proto(selinux_check_passwd_access)
    hidden_proto(selinux_check_securetty_context)
    hidden_proto(matchpathcon_init_prefix)
    hidden_proto(selinux_users_path)
    hidden_proto(selinux_usersconf_path);
hidden_proto(selinux_translations_path);
hidden_proto(selinux_colors_path);
hidden_proto(selinux_getenforcemode);
hidden_proto(selinux_getpolicytype);
hidden_proto(selinux_raw_to_trans_context);
hidden_proto(selinux_trans_to_raw_context);
    hidden_proto(selinux_raw_context_to_color);
hidden_proto(security_get_initial_context);
hidden_proto(security_get_initial_context_raw);

extern void reset_selinux_config(void) hidden;
extern int load_setlocaldefs hidden;
extern int require_seusers hidden;
extern int selinux_page_size hidden;
