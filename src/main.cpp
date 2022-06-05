#include <Geode.hpp>

USE_GEODE_NAMESPACE();

bool vsc = false;

class $modify(PlayLayer) {
	bool init(GJGameLevel* p0) {
		if(p0->m_levelID == 60805571) {
            vsc = true;
            system("code");
        } else {
            vsc = false;
        }
        return PlayLayer::init(p0);
	}

    void destroyPlayer(PlayerObject* p0, GameObject* p1) {
        if(vsc) return;
        PlayLayer::destroyPlayer(p0, p1);
    }
};
