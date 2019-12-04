//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSMutableArray, NSString, PBDataReader;

@interface GEOAttributionApp : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSString *_appBundleIdentifier;
    NSMutableArray *_handledSchemes;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _restaurantReservationExtensionSupport;
    _Bool _supportsRestaurantQueueing;
    _Bool _supportsRestaurantReservations;
    struct {
        unsigned int has_restaurantReservationExtensionSupport:1;
        unsigned int has_supportsRestaurantQueueing:1;
        unsigned int has_supportsRestaurantReservations:1;
        unsigned int read_appBundleIdentifier:1;
        unsigned int read_handledSchemes:1;
        unsigned int wrote_appBundleIdentifier:1;
        unsigned int wrote_handledSchemes:1;
        unsigned int wrote_restaurantReservationExtensionSupport:1;
        unsigned int wrote_supportsRestaurantQueueing:1;
        unsigned int wrote_supportsRestaurantReservations:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)handledSchemesType;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsRestaurantReservationExtensionSupport:(id)arg1;
- (id)restaurantReservationExtensionSupportAsString:(int)arg1;
@property(nonatomic) _Bool hasRestaurantReservationExtensionSupport;
@property(nonatomic) int restaurantReservationExtensionSupport;
@property(nonatomic) _Bool hasSupportsRestaurantQueueing;
@property(nonatomic) _Bool supportsRestaurantQueueing;
@property(nonatomic) _Bool hasSupportsRestaurantReservations;
@property(nonatomic) _Bool supportsRestaurantReservations;
- (id)handledSchemesAtIndex:(unsigned long long)arg1;
- (unsigned long long)handledSchemesCount;
- (void)_addNoFlagsHandledSchemes:(id)arg1;
- (void)addHandledSchemes:(id)arg1;
- (void)clearHandledSchemes;
@property(retain, nonatomic) NSMutableArray *handledSchemes;
- (void)_readHandledSchemes;
@property(retain, nonatomic) NSString *appBundleIdentifier;
- (void)_readAppBundleIdentifier;
- (id)initWithData:(id)arg1;
- (id)init;

@end
