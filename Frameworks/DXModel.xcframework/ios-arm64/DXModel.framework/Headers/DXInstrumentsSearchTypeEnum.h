
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionInstrumentsSearchTypeEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiPositionInstrumentsSearchTypeEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionInstrumentsSearchTypeEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionInstrumentsSearchTypeEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiPositionInstrumentsSearchTypeEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXInstrumentsSearchTypeEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionInstrumentsSearchTypeEnum || defined(INCLUDE_DXInstrumentsSearchTypeEnum))
#define DXInstrumentsSearchTypeEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXInstrumentsSearchTypeEnum : PSBaseEnum
@property (readonly, class, strong) DXInstrumentsSearchTypeEnum *NAME NS_SWIFT_NAME(NAME);
@property (readonly, class, strong) DXInstrumentsSearchTypeEnum *DESCRIPTION NS_SWIFT_NAME(DESCRIPTION);
@property (readonly, class, strong) DXInstrumentsSearchTypeEnum *NAME_DESCRIPTION NS_SWIFT_NAME(NAME_DESCRIPTION);

+ (DXInstrumentsSearchTypeEnum *)NAME;

+ (DXInstrumentsSearchTypeEnum *)DESCRIPTION;

+ (DXInstrumentsSearchTypeEnum *)NAME_DESCRIPTION;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXInstrumentsSearchTypeEnum *)change;

- (DXInstrumentsSearchTypeEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXInstrumentsSearchTypeEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXInstrumentsSearchTypeEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

+ (DXInstrumentsSearchTypeEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(DXInstrumentsSearchTypeEnum)

inline DXInstrumentsSearchTypeEnum *DXInstrumentsSearchTypeEnum_get_NAME(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentsSearchTypeEnum *DXInstrumentsSearchTypeEnum_NAME;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentsSearchTypeEnum, NAME, DXInstrumentsSearchTypeEnum *)

inline DXInstrumentsSearchTypeEnum *DXInstrumentsSearchTypeEnum_get_DESCRIPTION(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentsSearchTypeEnum *DXInstrumentsSearchTypeEnum_DESCRIPTION;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentsSearchTypeEnum, DESCRIPTION, DXInstrumentsSearchTypeEnum *)

inline DXInstrumentsSearchTypeEnum *DXInstrumentsSearchTypeEnum_get_NAME_DESCRIPTION(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentsSearchTypeEnum *DXInstrumentsSearchTypeEnum_NAME_DESCRIPTION;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentsSearchTypeEnum, NAME_DESCRIPTION, DXInstrumentsSearchTypeEnum *)

FOUNDATION_EXPORT void DXInstrumentsSearchTypeEnum_initWithNSString_withInt_(DXInstrumentsSearchTypeEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXInstrumentsSearchTypeEnum *new_DXInstrumentsSearchTypeEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXInstrumentsSearchTypeEnum *create_DXInstrumentsSearchTypeEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXInstrumentsSearchTypeEnum_init(DXInstrumentsSearchTypeEnum *self);

FOUNDATION_EXPORT DXInstrumentsSearchTypeEnum *new_DXInstrumentsSearchTypeEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXInstrumentsSearchTypeEnum *create_DXInstrumentsSearchTypeEnum_init(void);

FOUNDATION_EXPORT DXInstrumentsSearchTypeEnum *DXInstrumentsSearchTypeEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXInstrumentsSearchTypeEnum *DXInstrumentsSearchTypeEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXInstrumentsSearchTypeEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXInstrumentsSearchTypeEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiPositionInstrumentsSearchTypeEnum DXInstrumentsSearchTypeEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionInstrumentsSearchTypeEnum")
