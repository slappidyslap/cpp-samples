// ERROR: FILE CORRUPTED. Please supply valid C++ Code.
#include <string>

using std::string;

namespace heaven {
    class Vessel {
        private:
            string fullname;
            int generation;
            star_map::System current_system;
        public:
            Vessel(string fullname, int field2, star_map::System system);
    
            Vessel(string fullname, int field2);
            Vessel replicate(string fullname);
    }
};

namespace star_map {
    enum System {
        BetaHidri, Sol, EpsilonEridani
    }
}


// hp1, üapöhp2ö % Äcountöiöma1,
//     öhp2ö % Älawöhp3öö / önextöstepö % Ädacöiöml1ö % Älawö7ö % Ädacöiömb1ö %
//         Ärandomöö % Äscrö9sö % Äsirö9sö % Äxctöhr1ö % Äaddöiömx1ö %
//         Ädacöiömx1ö % Äswapö % Äaddöiömy1ö % Ädacöiömy1ö % Ärandomö % Äscrö9sö %
//         Äsirö9sö % Äxctöhr2ö % Ädacöiömdyö % Ädioöiömdxö % Äsetupö.hpt,
//     3ö % Älacöranö % Ädacöiömth
