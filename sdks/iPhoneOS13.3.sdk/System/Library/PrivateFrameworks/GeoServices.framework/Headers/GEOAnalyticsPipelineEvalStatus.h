//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, PBDataReader;

@interface GEOAnalyticsPipelineEvalStatus : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSMutableArray *_inflightTypeCounts;
    NSMutableArray *_shadowTypeCounts;
    NSMutableArray *_storedTypeCounts;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    BOOL _evalModeEnabled;
    struct {
        unsigned int has_evalModeEnabled:1;
        unsigned int read_inflightTypeCounts:1;
        unsigned int read_shadowTypeCounts:1;
        unsigned int read_storedTypeCounts:1;
        unsigned int wrote_inflightTypeCounts:1;
        unsigned int wrote_shadowTypeCounts:1;
        unsigned int wrote_storedTypeCounts:1;
        unsigned int wrote_evalModeEnabled:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)shadowTypeCountsType;
+ (Class)inflightTypeCountsType;
+ (Class)storedTypeCountsType;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)shadowTypeCountsAtIndex:(NSUInteger)arg1;
- (NSUInteger)shadowTypeCountsCount;
- (void)_addNoFlagsShadowTypeCounts:(id)arg1;
- (void)addShadowTypeCounts:(id)arg1;
- (void)clearShadowTypeCounts;
@property(retain, nonatomic) NSMutableArray *shadowTypeCounts;
- (void)_readShadowTypeCounts;
- (id)inflightTypeCountsAtIndex:(NSUInteger)arg1;
- (NSUInteger)inflightTypeCountsCount;
- (void)_addNoFlagsInflightTypeCounts:(id)arg1;
- (void)addInflightTypeCounts:(id)arg1;
- (void)clearInflightTypeCounts;
@property(retain, nonatomic) NSMutableArray *inflightTypeCounts;
- (void)_readInflightTypeCounts;
- (id)storedTypeCountsAtIndex:(NSUInteger)arg1;
- (NSUInteger)storedTypeCountsCount;
- (void)_addNoFlagsStoredTypeCounts:(id)arg1;
- (void)addStoredTypeCounts:(id)arg1;
- (void)clearStoredTypeCounts;
@property(retain, nonatomic) NSMutableArray *storedTypeCounts;
- (void)_readStoredTypeCounts;
@property(nonatomic) BOOL hasEvalModeEnabled;
@property(nonatomic) BOOL evalModeEnabled;
- (id)initWithData:(id)arg1;
- (id)init;

@end
