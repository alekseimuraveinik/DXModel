
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsEventSeverityEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEventsEventSeverityEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsEventSeverityEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsEventSeverityEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEventsEventSeverityEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXEventSeverityEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsEventSeverityEnum || defined(INCLUDE_DXEventSeverityEnum))
#define DXEventSeverityEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXEventSeverityEnum : PSBaseEnum
@property (readonly, class, strong) DXEventSeverityEnum *NORMAL NS_SWIFT_NAME(NORMAL);
@property (readonly, class, strong) DXEventSeverityEnum *MINOR NS_SWIFT_NAME(MINOR);
@property (readonly, class, strong) DXEventSeverityEnum *MAJOR NS_SWIFT_NAME(MAJOR);
@property (readonly, class, strong) DXEventSeverityEnum *CRITICAL NS_SWIFT_NAME(CRITICAL);

+ (DXEventSeverityEnum *)NORMAL;

+ (DXEventSeverityEnum *)MINOR;

+ (DXEventSeverityEnum *)MAJOR;

+ (DXEventSeverityEnum *)CRITICAL;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXEventSeverityEnum *)change;

- (DXEventSeverityEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXEventSeverityEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXEventSeverityEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

+ (DXEventSeverityEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(DXEventSeverityEnum)

inline DXEventSeverityEnum *DXEventSeverityEnum_get_NORMAL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXEventSeverityEnum *DXEventSeverityEnum_NORMAL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXEventSeverityEnum, NORMAL, DXEventSeverityEnum *)

inline DXEventSeverityEnum *DXEventSeverityEnum_get_MINOR(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXEventSeverityEnum *DXEventSeverityEnum_MINOR;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXEventSeverityEnum, MINOR, DXEventSeverityEnum *)

inline DXEventSeverityEnum *DXEventSeverityEnum_get_MAJOR(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXEventSeverityEnum *DXEventSeverityEnum_MAJOR;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXEventSeverityEnum, MAJOR, DXEventSeverityEnum *)

inline DXEventSeverityEnum *DXEventSeverityEnum_get_CRITICAL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXEventSeverityEnum *DXEventSeverityEnum_CRITICAL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXEventSeverityEnum, CRITICAL, DXEventSeverityEnum *)

FOUNDATION_EXPORT void DXEventSeverityEnum_initWithNSString_withInt_(DXEventSeverityEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXEventSeverityEnum *new_DXEventSeverityEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXEventSeverityEnum *create_DXEventSeverityEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXEventSeverityEnum_init(DXEventSeverityEnum *self);

FOUNDATION_EXPORT DXEventSeverityEnum *new_DXEventSeverityEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXEventSeverityEnum *create_DXEventSeverityEnum_init(void);

FOUNDATION_EXPORT DXEventSeverityEnum *DXEventSeverityEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXEventSeverityEnum *DXEventSeverityEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXEventSeverityEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXEventSeverityEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiEventsEventSeverityEnum DXEventSeverityEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsEventSeverityEnum")
