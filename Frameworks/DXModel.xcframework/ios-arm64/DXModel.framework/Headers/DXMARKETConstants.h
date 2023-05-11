
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelConstants")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelConstants
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelConstants 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelConstants 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelConstants

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETConstants_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelConstants || defined(INCLUDE_DXMARKETConstants))
#define DXMARKETConstants_

@protocol DXMARKETConstants < JavaObject >

@end

@interface DXMARKETConstants : NSObject
@property (readonly, copy, class) NSString *ACCOUNT_REPORTS NS_SWIFT_NAME(ACCOUNT_REPORTS);
@property (readonly, copy, class) NSString *NEWS NS_SWIFT_NAME(NEWS);
@property (readonly, copy, class) NSString *TRADE_HISTORY NS_SWIFT_NAME(TRADE_HISTORY);
@property (readonly, copy, class) NSString *DEPOSIT NS_SWIFT_NAME(DEPOSIT);
@property (readonly, copy, class) NSString *EXTERNAL_LINK_URL NS_SWIFT_NAME(EXTERNAL_LINK_URL);
@property (readonly, copy, class) NSString *USER_NAME NS_SWIFT_NAME(USER_NAME);
@property (readonly, copy, class) NSString *USER_KEY NS_SWIFT_NAME(USER_KEY);
@property (readonly, copy, class) NSString *USER_ID NS_SWIFT_NAME(USER_ID);
@property (readonly, copy, class) NSString *TERMS_AND_CONDITIONS_URL NS_SWIFT_NAME(TERMS_AND_CONDITIONS_URL);
@property (readonly, copy, class) NSString *AVAILABLE_ACCOUNTS NS_SWIFT_NAME(AVAILABLE_ACCOUNTS);
@property (readonly, copy, class) NSString *SELECTED_ACCOUNT NS_SWIFT_NAME(SELECTED_ACCOUNT);
@property (readonly, copy, class) NSString *CORE_SSO_TOKEN NS_SWIFT_NAME(CORE_SSO_TOKEN);
@property (readonly, copy, class) NSString *CORE_SSO_TOKEN_VALID_UNTIL NS_SWIFT_NAME(CORE_SSO_TOKEN_VALID_UNTIL);
@property (readonly, copy, class) NSString *USER_DELETION_ENABLED NS_SWIFT_NAME(USER_DELETION_ENABLED);
@property (readonly, copy, class) NSString *ACCOUNT_ALERTS_DEFAULT_INSTRUMENTS NS_SWIFT_NAME(ACCOUNT_ALERTS_DEFAULT_INSTRUMENTS);
@property (readonly, copy, class) NSString *PASSWORD_EXPIRED_ERROR_CODE NS_SWIFT_NAME(PASSWORD_EXPIRED_ERROR_CODE);
@property (readonly, copy, class) NSString *KEY_SESSION_CLOSED_FORCEOUT NS_SWIFT_NAME(KEY_SESSION_CLOSED_FORCEOUT);
@property (readonly, copy, class) NSString *KEY_SESSION_EXPIRED NS_SWIFT_NAME(KEY_SESSION_EXPIRED);
@property (readonly, copy, class) NSString *KEY_SESSION_CLOSED NS_SWIFT_NAME(KEY_SESSION_CLOSED);
@property (readonly, copy, class) NSString *CORE_SESSION_ID NS_SWIFT_NAME(CORE_SESSION_ID);
@property (readonly, copy, class) NSString *CORE_SESSION_CODE NS_SWIFT_NAME(CORE_SESSION_CODE);
@property (readonly, copy, class) NSString *KEY_UNSUPPORTED_VERSION NS_SWIFT_NAME(KEY_UNSUPPORTED_VERSION);
@property (readonly, copy, class) NSString *KEY_UNDEFINED NS_SWIFT_NAME(KEY_UNDEFINED);
@property (readonly, copy, class) NSString *KEY_BALANCE NS_SWIFT_NAME(KEY_BALANCE);
@property (readonly, copy, class) NSString *KEY_EQUITY NS_SWIFT_NAME(KEY_EQUITY);
@property (readonly, copy, class) NSString *KEY_BASE_CURRENCY_EQUITY NS_SWIFT_NAME(KEY_BASE_CURRENCY_EQUITY);
@property (readonly, copy, class) NSString *KEY_CREDIT NS_SWIFT_NAME(KEY_CREDIT);
@property (readonly, copy, class) NSString *KEY_NET_LIQUIDATION NS_SWIFT_NAME(KEY_NET_LIQUIDATION);
@property (readonly, copy, class) NSString *KEY_MARKET_VALUE_LONG NS_SWIFT_NAME(KEY_MARKET_VALUE_LONG);
@property (readonly, copy, class) NSString *KEY_MARKET_VALUE_SHORT NS_SWIFT_NAME(KEY_MARKET_VALUE_SHORT);
@property (readonly, copy, class) NSString *KEY_STOCK_VALUE_LONG NS_SWIFT_NAME(KEY_STOCK_VALUE_LONG);
@property (readonly, copy, class) NSString *KEY_STOCK_VALUE_SHORT NS_SWIFT_NAME(KEY_STOCK_VALUE_SHORT);
@property (readonly, copy, class) NSString *KEY_OPTION_VALUE_SHORT NS_SWIFT_NAME(KEY_OPTION_VALUE_SHORT);
@property (readonly, copy, class) NSString *KEY_OPTION_VALUE_LONG NS_SWIFT_NAME(KEY_OPTION_VALUE_LONG);
@property (readonly, copy, class) NSString *KEY_CASH_AVAILABLE NS_SWIFT_NAME(KEY_CASH_AVAILABLE);
@property (readonly, copy, class) NSString *KEY_INITIAL_MARGIN NS_SWIFT_NAME(KEY_INITIAL_MARGIN);
@property (readonly, copy, class) NSString *KEY_MAINTENANCE_MARGIN NS_SWIFT_NAME(KEY_MAINTENANCE_MARGIN);
@property (readonly, copy, class) NSString *KEY_EQUITY_LEVEL NS_SWIFT_NAME(KEY_EQUITY_LEVEL);
@property (readonly, copy, class) NSString *KEY_BUYING_POWER NS_SWIFT_NAME(KEY_BUYING_POWER);
@property (readonly, copy, class) NSString *KEY_MARGIN_BUYING_POWER NS_SWIFT_NAME(KEY_MARGIN_BUYING_POWER);
@property (readonly, copy, class) NSString *KEY_SPECIAL_MEMORANDUM_ACCOUNT NS_SWIFT_NAME(KEY_SPECIAL_MEMORANDUM_ACCOUNT);
@property (readonly, copy, class) NSString *KEY_DAY_TRADING_BUYING_POWER NS_SWIFT_NAME(KEY_DAY_TRADING_BUYING_POWER);
@property (readonly, copy, class) NSString *KEY_DAY_TRADES_IN_5_DAYS NS_SWIFT_NAME(KEY_DAY_TRADES_IN_5_DAYS);
@property (readonly, copy, class) NSString *KEY_OPEN_PL NS_SWIFT_NAME(KEY_OPEN_PL);
@property (readonly, copy, class) NSString *KEY_CLOSED_PL NS_SWIFT_NAME(KEY_CLOSED_PL);
@property (readonly, copy, class) NSString *KEY_TOTAL_PL NS_SWIFT_NAME(KEY_TOTAL_PL);
@property (readonly, copy, class) NSString *KEY_POSITION_METRICS NS_SWIFT_NAME(KEY_POSITION_METRICS);
@property (readonly, copy, class) NSString *KEY_DAY_REALIZED_PL NS_SWIFT_NAME(KEY_DAY_REALIZED_PL);
@property (readonly, copy, class) NSString *KEY_DAY_UNREALIZED_PL NS_SWIFT_NAME(KEY_DAY_UNREALIZED_PL);
@property (readonly, copy, class) NSString *KEY_DAY_TOTAL_PL NS_SWIFT_NAME(KEY_DAY_TOTAL_PL);
@property (readonly, copy, class) NSString *KEY_DAY_NET_REALIZED_PL NS_SWIFT_NAME(KEY_DAY_NET_REALIZED_PL);
@property (readonly, copy, class) NSString *KEY_MONTH_TO_DATE_REALIZED_PL NS_SWIFT_NAME(KEY_MONTH_TO_DATE_REALIZED_PL);
@property (readonly, copy, class) NSString *KEY_MONTH_TO_DATE_UNREALIZED_PL NS_SWIFT_NAME(KEY_MONTH_TO_DATE_UNREALIZED_PL);
@property (readonly, copy, class) NSString *KEY_MONTH_TO_DATE_TOTAL_PL NS_SWIFT_NAME(KEY_MONTH_TO_DATE_TOTAL_PL);
@property (readonly, copy, class) NSString *KEY_MONTH_TO_DATE_NET_REALIZED_PL NS_SWIFT_NAME(KEY_MONTH_TO_DATE_NET_REALIZED_PL);
@property (readonly, copy, class) NSString *KEY_YEAR_TO_DATE_REALIZED_PL NS_SWIFT_NAME(KEY_YEAR_TO_DATE_REALIZED_PL);
@property (readonly, copy, class) NSString *KEY_YEAR_TO_DATE_UNREALIZED_PL NS_SWIFT_NAME(KEY_YEAR_TO_DATE_UNREALIZED_PL);
@property (readonly, copy, class) NSString *KEY_YEAR_TO_DATE_TOTAL_PL NS_SWIFT_NAME(KEY_YEAR_TO_DATE_TOTAL_PL);
@property (readonly, copy, class) NSString *KEY_YEAR_TO_DATE_NET_REALIZED_PL NS_SWIFT_NAME(KEY_YEAR_TO_DATE_NET_REALIZED_PL);
@property (readonly, copy, class) NSString *KEY_RETURN_ON_INVESTMENT NS_SWIFT_NAME(KEY_RETURN_ON_INVESTMENT);
@property (readonly, copy, class) NSString *LOGIN_PAGE_URL NS_SWIFT_NAME(LOGIN_PAGE_URL);
@property (readonly, copy, class) NSString *LOGIN_PAGE_SUCCESS_CALLBACK NS_SWIFT_NAME(LOGIN_PAGE_SUCCESS_CALLBACK);
@property (readonly, copy, class) NSString *STOP_TYPE_KEY NS_SWIFT_NAME(STOP_TYPE_KEY);

+ (NSString *)ACCOUNT_REPORTS;

+ (NSString *)NEWS;

+ (NSString *)TRADE_HISTORY;

+ (NSString *)DEPOSIT;

+ (NSString *)EXTERNAL_LINK_URL;

+ (NSString *)USER_NAME;

+ (NSString *)USER_KEY;

+ (NSString *)USER_ID;

+ (NSString *)TERMS_AND_CONDITIONS_URL;

+ (NSString *)AVAILABLE_ACCOUNTS;

+ (NSString *)SELECTED_ACCOUNT;

+ (NSString *)CORE_SSO_TOKEN;

+ (NSString *)CORE_SSO_TOKEN_VALID_UNTIL;

+ (NSString *)USER_DELETION_ENABLED;

+ (NSString *)ACCOUNT_ALERTS_DEFAULT_INSTRUMENTS;

+ (NSString *)PASSWORD_EXPIRED_ERROR_CODE;

+ (NSString *)KEY_SESSION_CLOSED_FORCEOUT;

+ (NSString *)KEY_SESSION_EXPIRED;

+ (NSString *)KEY_SESSION_CLOSED;

+ (NSString *)CORE_SESSION_ID;

+ (NSString *)CORE_SESSION_CODE;

+ (NSString *)KEY_UNSUPPORTED_VERSION;

+ (NSString *)KEY_UNDEFINED;

+ (NSString *)KEY_BALANCE;

+ (NSString *)KEY_EQUITY;

+ (NSString *)KEY_BASE_CURRENCY_EQUITY;

+ (NSString *)KEY_CREDIT;

+ (NSString *)KEY_NET_LIQUIDATION;

+ (NSString *)KEY_MARKET_VALUE_LONG;

+ (NSString *)KEY_MARKET_VALUE_SHORT;

+ (NSString *)KEY_STOCK_VALUE_LONG;

+ (NSString *)KEY_STOCK_VALUE_SHORT;

+ (NSString *)KEY_OPTION_VALUE_SHORT;

+ (NSString *)KEY_OPTION_VALUE_LONG;

+ (NSString *)KEY_CASH_AVAILABLE;

+ (NSString *)KEY_INITIAL_MARGIN;

+ (NSString *)KEY_MAINTENANCE_MARGIN;

+ (NSString *)KEY_EQUITY_LEVEL;

+ (NSString *)KEY_BUYING_POWER;

+ (NSString *)KEY_MARGIN_BUYING_POWER;

+ (NSString *)KEY_SPECIAL_MEMORANDUM_ACCOUNT;

+ (NSString *)KEY_DAY_TRADING_BUYING_POWER;

+ (NSString *)KEY_DAY_TRADES_IN_5_DAYS;

+ (NSString *)KEY_OPEN_PL;

+ (NSString *)KEY_CLOSED_PL;

+ (NSString *)KEY_TOTAL_PL;

+ (NSString *)KEY_POSITION_METRICS;

+ (NSString *)KEY_DAY_REALIZED_PL;

+ (NSString *)KEY_DAY_UNREALIZED_PL;

+ (NSString *)KEY_DAY_TOTAL_PL;

+ (NSString *)KEY_DAY_NET_REALIZED_PL;

+ (NSString *)KEY_MONTH_TO_DATE_REALIZED_PL;

+ (NSString *)KEY_MONTH_TO_DATE_UNREALIZED_PL;

+ (NSString *)KEY_MONTH_TO_DATE_TOTAL_PL;

+ (NSString *)KEY_MONTH_TO_DATE_NET_REALIZED_PL;

+ (NSString *)KEY_YEAR_TO_DATE_REALIZED_PL;

+ (NSString *)KEY_YEAR_TO_DATE_UNREALIZED_PL;

+ (NSString *)KEY_YEAR_TO_DATE_TOTAL_PL;

+ (NSString *)KEY_YEAR_TO_DATE_NET_REALIZED_PL;

+ (NSString *)KEY_RETURN_ON_INVESTMENT;

+ (NSString *)LOGIN_PAGE_URL;

+ (NSString *)LOGIN_PAGE_SUCCESS_CALLBACK;

+ (NSString *)STOP_TYPE_KEY;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETConstants)

inline NSString *DXMARKETConstants_get_ACCOUNT_REPORTS(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_ACCOUNT_REPORTS;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, ACCOUNT_REPORTS, NSString *)

inline NSString *DXMARKETConstants_get_NEWS(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_NEWS;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, NEWS, NSString *)

inline NSString *DXMARKETConstants_get_TRADE_HISTORY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_TRADE_HISTORY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, TRADE_HISTORY, NSString *)

inline NSString *DXMARKETConstants_get_DEPOSIT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_DEPOSIT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, DEPOSIT, NSString *)

inline NSString *DXMARKETConstants_get_EXTERNAL_LINK_URL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_EXTERNAL_LINK_URL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, EXTERNAL_LINK_URL, NSString *)

inline NSString *DXMARKETConstants_get_USER_NAME(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_USER_NAME;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, USER_NAME, NSString *)

inline NSString *DXMARKETConstants_get_USER_KEY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_USER_KEY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, USER_KEY, NSString *)

inline NSString *DXMARKETConstants_get_USER_ID(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_USER_ID;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, USER_ID, NSString *)

inline NSString *DXMARKETConstants_get_TERMS_AND_CONDITIONS_URL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_TERMS_AND_CONDITIONS_URL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, TERMS_AND_CONDITIONS_URL, NSString *)

inline NSString *DXMARKETConstants_get_AVAILABLE_ACCOUNTS(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_AVAILABLE_ACCOUNTS;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, AVAILABLE_ACCOUNTS, NSString *)

inline NSString *DXMARKETConstants_get_SELECTED_ACCOUNT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_SELECTED_ACCOUNT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, SELECTED_ACCOUNT, NSString *)

inline NSString *DXMARKETConstants_get_CORE_SSO_TOKEN(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_CORE_SSO_TOKEN;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, CORE_SSO_TOKEN, NSString *)

inline NSString *DXMARKETConstants_get_CORE_SSO_TOKEN_VALID_UNTIL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_CORE_SSO_TOKEN_VALID_UNTIL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, CORE_SSO_TOKEN_VALID_UNTIL, NSString *)

inline NSString *DXMARKETConstants_get_USER_DELETION_ENABLED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_USER_DELETION_ENABLED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, USER_DELETION_ENABLED, NSString *)

inline NSString *DXMARKETConstants_get_ACCOUNT_ALERTS_DEFAULT_INSTRUMENTS(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_ACCOUNT_ALERTS_DEFAULT_INSTRUMENTS;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, ACCOUNT_ALERTS_DEFAULT_INSTRUMENTS, NSString *)

inline NSString *DXMARKETConstants_get_PASSWORD_EXPIRED_ERROR_CODE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_PASSWORD_EXPIRED_ERROR_CODE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, PASSWORD_EXPIRED_ERROR_CODE, NSString *)

inline NSString *DXMARKETConstants_get_KEY_SESSION_CLOSED_FORCEOUT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_KEY_SESSION_CLOSED_FORCEOUT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, KEY_SESSION_CLOSED_FORCEOUT, NSString *)

inline NSString *DXMARKETConstants_get_KEY_SESSION_EXPIRED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_KEY_SESSION_EXPIRED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, KEY_SESSION_EXPIRED, NSString *)

inline NSString *DXMARKETConstants_get_KEY_SESSION_CLOSED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_KEY_SESSION_CLOSED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, KEY_SESSION_CLOSED, NSString *)

inline NSString *DXMARKETConstants_get_CORE_SESSION_ID(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_CORE_SESSION_ID;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, CORE_SESSION_ID, NSString *)

inline NSString *DXMARKETConstants_get_CORE_SESSION_CODE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_CORE_SESSION_CODE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, CORE_SESSION_CODE, NSString *)

inline NSString *DXMARKETConstants_get_KEY_UNSUPPORTED_VERSION(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_KEY_UNSUPPORTED_VERSION;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, KEY_UNSUPPORTED_VERSION, NSString *)

inline NSString *DXMARKETConstants_get_KEY_UNDEFINED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_KEY_UNDEFINED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, KEY_UNDEFINED, NSString *)

inline NSString *DXMARKETConstants_get_KEY_BALANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_KEY_BALANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, KEY_BALANCE, NSString *)

inline NSString *DXMARKETConstants_get_KEY_EQUITY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_KEY_EQUITY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, KEY_EQUITY, NSString *)

inline NSString *DXMARKETConstants_get_KEY_BASE_CURRENCY_EQUITY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_KEY_BASE_CURRENCY_EQUITY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, KEY_BASE_CURRENCY_EQUITY, NSString *)

inline NSString *DXMARKETConstants_get_KEY_CREDIT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_KEY_CREDIT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, KEY_CREDIT, NSString *)

inline NSString *DXMARKETConstants_get_KEY_NET_LIQUIDATION(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_KEY_NET_LIQUIDATION;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, KEY_NET_LIQUIDATION, NSString *)

inline NSString *DXMARKETConstants_get_KEY_MARKET_VALUE_LONG(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_KEY_MARKET_VALUE_LONG;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, KEY_MARKET_VALUE_LONG, NSString *)

inline NSString *DXMARKETConstants_get_KEY_MARKET_VALUE_SHORT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_KEY_MARKET_VALUE_SHORT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, KEY_MARKET_VALUE_SHORT, NSString *)

inline NSString *DXMARKETConstants_get_KEY_STOCK_VALUE_LONG(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_KEY_STOCK_VALUE_LONG;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, KEY_STOCK_VALUE_LONG, NSString *)

inline NSString *DXMARKETConstants_get_KEY_STOCK_VALUE_SHORT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_KEY_STOCK_VALUE_SHORT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, KEY_STOCK_VALUE_SHORT, NSString *)

inline NSString *DXMARKETConstants_get_KEY_OPTION_VALUE_SHORT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_KEY_OPTION_VALUE_SHORT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, KEY_OPTION_VALUE_SHORT, NSString *)

inline NSString *DXMARKETConstants_get_KEY_OPTION_VALUE_LONG(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_KEY_OPTION_VALUE_LONG;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, KEY_OPTION_VALUE_LONG, NSString *)

inline NSString *DXMARKETConstants_get_KEY_CASH_AVAILABLE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_KEY_CASH_AVAILABLE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, KEY_CASH_AVAILABLE, NSString *)

inline NSString *DXMARKETConstants_get_KEY_INITIAL_MARGIN(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_KEY_INITIAL_MARGIN;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, KEY_INITIAL_MARGIN, NSString *)

inline NSString *DXMARKETConstants_get_KEY_MAINTENANCE_MARGIN(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_KEY_MAINTENANCE_MARGIN;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, KEY_MAINTENANCE_MARGIN, NSString *)

inline NSString *DXMARKETConstants_get_KEY_EQUITY_LEVEL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_KEY_EQUITY_LEVEL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, KEY_EQUITY_LEVEL, NSString *)

inline NSString *DXMARKETConstants_get_KEY_BUYING_POWER(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_KEY_BUYING_POWER;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, KEY_BUYING_POWER, NSString *)

inline NSString *DXMARKETConstants_get_KEY_MARGIN_BUYING_POWER(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_KEY_MARGIN_BUYING_POWER;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, KEY_MARGIN_BUYING_POWER, NSString *)

inline NSString *DXMARKETConstants_get_KEY_SPECIAL_MEMORANDUM_ACCOUNT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_KEY_SPECIAL_MEMORANDUM_ACCOUNT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, KEY_SPECIAL_MEMORANDUM_ACCOUNT, NSString *)

inline NSString *DXMARKETConstants_get_KEY_DAY_TRADING_BUYING_POWER(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_KEY_DAY_TRADING_BUYING_POWER;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, KEY_DAY_TRADING_BUYING_POWER, NSString *)

inline NSString *DXMARKETConstants_get_KEY_DAY_TRADES_IN_5_DAYS(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_KEY_DAY_TRADES_IN_5_DAYS;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, KEY_DAY_TRADES_IN_5_DAYS, NSString *)

inline NSString *DXMARKETConstants_get_KEY_OPEN_PL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_KEY_OPEN_PL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, KEY_OPEN_PL, NSString *)

inline NSString *DXMARKETConstants_get_KEY_CLOSED_PL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_KEY_CLOSED_PL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, KEY_CLOSED_PL, NSString *)

inline NSString *DXMARKETConstants_get_KEY_TOTAL_PL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_KEY_TOTAL_PL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, KEY_TOTAL_PL, NSString *)

inline NSString *DXMARKETConstants_get_KEY_POSITION_METRICS(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_KEY_POSITION_METRICS;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, KEY_POSITION_METRICS, NSString *)

inline NSString *DXMARKETConstants_get_KEY_DAY_REALIZED_PL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_KEY_DAY_REALIZED_PL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, KEY_DAY_REALIZED_PL, NSString *)

inline NSString *DXMARKETConstants_get_KEY_DAY_UNREALIZED_PL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_KEY_DAY_UNREALIZED_PL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, KEY_DAY_UNREALIZED_PL, NSString *)

inline NSString *DXMARKETConstants_get_KEY_DAY_TOTAL_PL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_KEY_DAY_TOTAL_PL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, KEY_DAY_TOTAL_PL, NSString *)

inline NSString *DXMARKETConstants_get_KEY_DAY_NET_REALIZED_PL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_KEY_DAY_NET_REALIZED_PL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, KEY_DAY_NET_REALIZED_PL, NSString *)

inline NSString *DXMARKETConstants_get_KEY_MONTH_TO_DATE_REALIZED_PL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_KEY_MONTH_TO_DATE_REALIZED_PL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, KEY_MONTH_TO_DATE_REALIZED_PL, NSString *)

inline NSString *DXMARKETConstants_get_KEY_MONTH_TO_DATE_UNREALIZED_PL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_KEY_MONTH_TO_DATE_UNREALIZED_PL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, KEY_MONTH_TO_DATE_UNREALIZED_PL, NSString *)

inline NSString *DXMARKETConstants_get_KEY_MONTH_TO_DATE_TOTAL_PL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_KEY_MONTH_TO_DATE_TOTAL_PL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, KEY_MONTH_TO_DATE_TOTAL_PL, NSString *)

inline NSString *DXMARKETConstants_get_KEY_MONTH_TO_DATE_NET_REALIZED_PL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_KEY_MONTH_TO_DATE_NET_REALIZED_PL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, KEY_MONTH_TO_DATE_NET_REALIZED_PL, NSString *)

inline NSString *DXMARKETConstants_get_KEY_YEAR_TO_DATE_REALIZED_PL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_KEY_YEAR_TO_DATE_REALIZED_PL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, KEY_YEAR_TO_DATE_REALIZED_PL, NSString *)

inline NSString *DXMARKETConstants_get_KEY_YEAR_TO_DATE_UNREALIZED_PL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_KEY_YEAR_TO_DATE_UNREALIZED_PL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, KEY_YEAR_TO_DATE_UNREALIZED_PL, NSString *)

inline NSString *DXMARKETConstants_get_KEY_YEAR_TO_DATE_TOTAL_PL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_KEY_YEAR_TO_DATE_TOTAL_PL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, KEY_YEAR_TO_DATE_TOTAL_PL, NSString *)

inline NSString *DXMARKETConstants_get_KEY_YEAR_TO_DATE_NET_REALIZED_PL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_KEY_YEAR_TO_DATE_NET_REALIZED_PL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, KEY_YEAR_TO_DATE_NET_REALIZED_PL, NSString *)

inline NSString *DXMARKETConstants_get_KEY_RETURN_ON_INVESTMENT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_KEY_RETURN_ON_INVESTMENT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, KEY_RETURN_ON_INVESTMENT, NSString *)

inline NSString *DXMARKETConstants_get_LOGIN_PAGE_URL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_LOGIN_PAGE_URL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, LOGIN_PAGE_URL, NSString *)

inline NSString *DXMARKETConstants_get_LOGIN_PAGE_SUCCESS_CALLBACK(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_LOGIN_PAGE_SUCCESS_CALLBACK;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, LOGIN_PAGE_SUCCESS_CALLBACK, NSString *)

inline NSString *DXMARKETConstants_get_STOP_TYPE_KEY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETConstants_STOP_TYPE_KEY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETConstants, STOP_TYPE_KEY, NSString *)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETConstants)

#define ComDevexpertsDxmarketClientModelConstants DXMARKETConstants

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelConstants")
