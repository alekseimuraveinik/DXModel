
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountKeyTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAccountAccountKeyTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountKeyTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountKeyTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAccountAccountKeyTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAccountKeyTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountKeyTO || defined(INCLUDE_DXAccountKeyTO))
#define DXAccountKeyTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXPlatformTypeEnum;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXAccountKeyTO : PSBaseTransferObject
@property (readonly, class, strong) DXAccountKeyTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXAccountKeyTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithInt:(jint)id_
                         withNSString:(NSString *)code;

- (instancetype __nonnull)initWithInt:(jint)id_
                         withNSString:(NSString *)code
               withDXPlatformTypeEnum:(DXPlatformTypeEnum *)platformType;

- (DXAccountKeyTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXAccountKeyTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSString *)getCode;

- (jint)getId;

- (DXPlatformTypeEnum *)getPlatformType;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setCodeWithNSString:(NSString *)code;

- (void)setIdWithInt:(jint)id_;

- (void)setPlatformTypeWithDXPlatformTypeEnum:(DXPlatformTypeEnum *)platformType;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXAccountKeyTO)

inline DXAccountKeyTO *DXAccountKeyTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAccountKeyTO *DXAccountKeyTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAccountKeyTO, EMPTY, DXAccountKeyTO *)

FOUNDATION_EXPORT void DXAccountKeyTO_initWithInt_withNSString_(DXAccountKeyTO *self, jint id_, NSString *code);

FOUNDATION_EXPORT DXAccountKeyTO *new_DXAccountKeyTO_initWithInt_withNSString_(jint id_, NSString *code) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAccountKeyTO *create_DXAccountKeyTO_initWithInt_withNSString_(jint id_, NSString *code);

FOUNDATION_EXPORT void DXAccountKeyTO_initWithInt_withNSString_withDXPlatformTypeEnum_(DXAccountKeyTO *self, jint id_, NSString *code, DXPlatformTypeEnum *platformType);

FOUNDATION_EXPORT DXAccountKeyTO *new_DXAccountKeyTO_initWithInt_withNSString_withDXPlatformTypeEnum_(jint id_, NSString *code, DXPlatformTypeEnum *platformType) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAccountKeyTO *create_DXAccountKeyTO_initWithInt_withNSString_withDXPlatformTypeEnum_(jint id_, NSString *code, DXPlatformTypeEnum *platformType);

FOUNDATION_EXPORT void DXAccountKeyTO_init(DXAccountKeyTO *self);

FOUNDATION_EXPORT DXAccountKeyTO *new_DXAccountKeyTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAccountKeyTO *create_DXAccountKeyTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXAccountKeyTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiAccountAccountKeyTO DXAccountKeyTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountKeyTO")
