//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface ASCodableDatabaseCompetitionScore : PBCodable <NSCopying>
{
    CDStruct_5df41632 _scores;
}

- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setScores:(long long )arg1 count:(NSUInteger)arg2;
- (long long)scoresAtIndex:(NSUInteger)arg1;
- (void)addScores:(long long)arg1;
- (void)clearScores;
@property(readonly, nonatomic) long long scores;
@property(readonly, nonatomic) NSUInteger scoresCount;
- (void)dealloc;

@end
