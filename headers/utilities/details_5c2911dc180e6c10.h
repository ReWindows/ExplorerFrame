#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ExplorerFrame.dll by Windissect. 6 member(s).
namespace fc {
class details {
public:
    class config_info;
    class config_parser;
    class property_ignore;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?change_time_letter@details@fc@@YADW4change_time@2@@Z
    char change_time_letter(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?is_feature_node@details@fc@@YA_NPEBDAEAIAEAUchange_profile@2@@Z
    bool is_feature_node(char const *, unsigned int &, ::fc::change_profile &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?module_address@details@fc@@YAXXZ
    void module_address();
};
} // namespace fc
