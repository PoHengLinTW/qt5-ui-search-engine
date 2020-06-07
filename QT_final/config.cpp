#include "config.h"

/**Porgress */
bool database_connection = true;
bool client_connection = true;
bool crawling = false;
bool report = false;

static std::time_t t = std::time(nullptr);

/**Server info */
int total_count = 1000;
std::tm begin_time = *std::localtime(&t);
int failure_count = 10;

/**Workload */
std::string clientA_name = "A";
std::string clientB_name = "B";
std::string clientC_name = "C";
int total_A = 1000;
int total_B = 1000;
int total_C = 1000;

/**Website info */
int yahoo_cnt = 100;
int yahoo_fail = 0;
std::tm yahoo_begin = *std::localtime(&t);;

int ptt_cnt = 100;
int ptt_fail = 0;
std::tm ptt_begin = *std::localtime(&t);;

int ettoday_cnt = 100;
int ettoday_fail = 0;
std::tm ettoday_begin = *std::localtime(&t);;

/**Client info
 * state=0, off
 *      =1, run
 *      =2, suspend
 */
int clientA_state = 1;
int clientA_crawl = 1000;
int clientA_fail = 10;
std::tm clientA_begin = *std::localtime(&t);;

int clientB_state = 2; //suspend
int clientB_crawl = 500;
int clientB_fail = 0;
std::tm clientB_begin = *std::localtime(&t);;

int clientC_state = 0;
int clientC_crawl = 100;
int clientC_fail = 0;
std::tm clientC_begin = *std::localtime(&t);;
