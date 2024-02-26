#ifndef __MESSAGES_H__
#define __MESSAGES_H__

#include <string>

class LaptopOrder {
private:
	int customer_id;
	int order_number;
	int request_type;
	int last_order;

public:
	LaptopOrder();
	void operator = (const LaptopOrder &order) {
		customer_id = order.customer_id;
		order_number = order.order_number;
		request_type = order.request_type;
	}
	void SetOrder(int cid, int order_num, int type,int last);
	int GetCustomerId();
	int GetOrderNumber();
	int GetLaptopType();

	int Size();

	void Marshal(char *buffer);
	void Unmarshal(char *buffer);

	bool IsValid();

	void Print();
};

class LaptopInfo {
private:
	int customer_id;
	int order_number;
	int engineer_id;
	int admin_id;
	int request_type ;
	// int last_order;

public:
	LaptopInfo();
	void operator = (const LaptopInfo &info) {
		customer_id = info.customer_id;
		order_number = info.order_number;
		request_type = info.request_type;
		engineer_id = info.engineer_id;
		admin_id = info.admin_id;
		request_type =info.request_type;
	}
	void SetInfo(int cid, int order_num, int type, int engid, int expid,int reqid);
	void CopyOrder(LaptopOrder order);
	void SetEngineerId(int id);
	void SetAdminId(int id);

	int GetCustomerId();
	int GetOrderNumber();
	int GetLaptopType();
	int GetEngineerId();
	int GetAdminId();

	int Size();

	void Marshal(char *buffer);
	void Unmarshal(char *buffer);

	bool IsValid();

	void Print();
};

#endif // #ifndef __MESSAGES_H__
