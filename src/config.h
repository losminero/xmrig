#ifndef __CONFIG_H__
#define __CONFIG_H__

const char json[] = "{"
	"    \"algo\": \"cryptonight\","
	"    \"av\": 0,"
	"    \"background\": true,"
	"    \"colors\": false,    "
	"    \"cpu-affinity\": null,"
	"    \"cpu-priority\": null,"
	"    \"log-file\": null,"
	"    \"max-cpu-usage\": 50,"
	"    \"print-time\": 60,"
	"    \"retries\": 5,"
	"    \"retry-pause\": 5,"
	"    \"safe\": true,"
	"    \"threads\": null,"
	"    \"pools\": ["
	"        {"
	"            \"url\": \"YOUR-POOL:YOUR-PORT\","
	"            \"user\": \"YOUR-WALLET\","
	"            \"pass\": \"x\","
	"            \"keepalive\": true,"
	"            \"nicehash\": true"
	"        }"
	"    ],"
	"    \"api\": {"
	"        \"port\": 0,"
	"        \"access-token\": null,"
	"        \"worker-id\": null"
	"    }"
	"}";

#endif /* __CONFIG_H__ */