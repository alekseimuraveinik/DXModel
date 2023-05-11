
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiUtilErrorTO")
#ifdef RESTRICT_ComDevexpertsPipestoneApiUtilErrorTO
#define INCLUDE_ALL_ComDevexpertsPipestoneApiUtilErrorTO 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneApiUtilErrorTO 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneApiUtilErrorTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSErrorTO_) && (INCLUDE_ALL_ComDevexpertsPipestoneApiUtilErrorTO || defined(INCLUDE_PSErrorTO))
#define PSErrorTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSErrorTypeEnum;
@class PSStringListTO;
@protocol PSTransferObject;

@interface PSErrorTO : PSBaseTransferObject
@property (readonly, class, strong) PSErrorTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (PSErrorTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithPSErrorTypeEnum:(PSErrorTypeEnum *)errorType
                                     withNSString:(NSString *)errorCode
                                     withNSString:(NSString *)message;

- (instancetype __nonnull)initWithPSErrorTypeEnum:(PSErrorTypeEnum *)errorType
                                     withNSString:(NSString *)errorCode
                                     withNSString:(NSString *)message
                               withPSStringListTO:(PSStringListTO *)params;

- (PSErrorTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (PSErrorTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSString *)getErrorCode;

- (PSErrorTypeEnum *)getErrorType;

- (NSString *)getMessage;

- (PSStringListTO *)getParams;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setErrorCodeWithNSString:(NSString *)errorCode;

- (void)setErrorTypeWithPSErrorTypeEnum:(PSErrorTypeEnum *)errorType;

- (void)setMessageWithNSString:(NSString *)message;

- (void)setParamsWithPSStringListTO:(PSStringListTO *)params;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(PSErrorTO)

inline PSErrorTO *PSErrorTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT PSErrorTO *PSErrorTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(PSErrorTO, EMPTY, PSErrorTO *)

FOUNDATION_EXPORT void PSErrorTO_initWithPSErrorTypeEnum_withNSString_withNSString_(PSErrorTO *self, PSErrorTypeEnum *errorType, NSString *errorCode, NSString *message);

FOUNDATION_EXPORT PSErrorTO *new_PSErrorTO_initWithPSErrorTypeEnum_withNSString_withNSString_(PSErrorTypeEnum *errorType, NSString *errorCode, NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSErrorTO *create_PSErrorTO_initWithPSErrorTypeEnum_withNSString_withNSString_(PSErrorTypeEnum *errorType, NSString *errorCode, NSString *message);

FOUNDATION_EXPORT void PSErrorTO_initWithPSErrorTypeEnum_withNSString_withNSString_withPSStringListTO_(PSErrorTO *self, PSErrorTypeEnum *errorType, NSString *errorCode, NSString *message, PSStringListTO *params);

FOUNDATION_EXPORT PSErrorTO *new_PSErrorTO_initWithPSErrorTypeEnum_withNSString_withNSString_withPSStringListTO_(PSErrorTypeEnum *errorType, NSString *errorCode, NSString *message, PSStringListTO *params) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSErrorTO *create_PSErrorTO_initWithPSErrorTypeEnum_withNSString_withNSString_withPSStringListTO_(PSErrorTypeEnum *errorType, NSString *errorCode, NSString *message, PSStringListTO *params);

FOUNDATION_EXPORT void PSErrorTO_init(PSErrorTO *self);

FOUNDATION_EXPORT PSErrorTO *new_PSErrorTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSErrorTO *create_PSErrorTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(PSErrorTO)

@compatibility_alias ComDevexpertsPipestoneApiUtilErrorTO PSErrorTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiUtilErrorTO")
