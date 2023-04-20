#pragma once
#define DISTDIVIDE 5000

struct AtsScenarioMsg {
	int MessageID = 1501;
	int MessageSize = sizeof(AtsScenarioMsg);
	double AtsStartX, AtsStartY;
	double AtsDestiationX, AtsDestiationY;
	double Velocity;
	int atsType; // 0 : 오류 1 : 탄도탄 2 : 항공기
};

struct AtsOpCommandMsg {
	int MessageID = 1510;
	int MessageSize = sizeof(AtsOpCommandMsg);
	bool AstCommand;
};

struct InterceptMsg {
	int MessageID = 1520; // 1520 OR 1320
	int MessageSize = sizeof(InterceptMsg);
	int  SuccessDef = 0; // 0:진행중, 1:성공 2:실패
};

struct AtsStateMsg {
	int MessageID = 5101;
	int MessageSize = sizeof(AtsStateMsg);
	bool AstState;
};

struct AtsPositionMsg {
	int MessageID = 5110;
	int MessageSize = sizeof(AtsPositionMsg);
	double  X_AstLoc, Y_AstLoc;
};

struct MssScenarioMsg {
	int MessageID = 1301;
	int MessageSize = sizeof(MssScenarioMsg);
	double MssStartX, MssStartY;
	double Velocity = 5;
};

struct MssOpCommandMsg {
	int MessageID = 1310;
	int MessageSize = sizeof(MssOpCommandMsg);
	bool Launch;
};

struct MssDirectionMsg {
	int MessageID = 1320;
	int MessageSize = sizeof(MssOpCommandMsg);
	double  XDir, YDir;
	int  SuccessDef = 0; // 0:진행중, 1:성공 2:실패
};

struct MssStateMsg {
	int MessageID = 3110;
	int MessageSize = sizeof(MssStateMsg);
	bool MssState;
};

struct MssPositionMsg {
	int MessageID = 3120;
	int MessageSize = sizeof(MssPositionMsg);
	double X_Pos, Y_Pos;
};