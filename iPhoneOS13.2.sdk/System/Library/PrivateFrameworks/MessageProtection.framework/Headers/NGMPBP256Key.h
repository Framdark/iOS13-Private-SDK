//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface NGMPBP256Key : PBCodable <NSCopying>
{
    NSData *_keyData;
    NSString *_keychainTag;
    int _keystore;
}

@property(retain, nonatomic) NSData *keyData; // @synthesize keyData=_keyData;
@property(nonatomic) int keystore; // @synthesize keystore=_keystore;
@property(retain, nonatomic) NSString *keychainTag; // @synthesize keychainTag=_keychainTag;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasKeyData;
- (int)StringAsKeystore:(id)arg1;
- (id)keystoreAsString:(int)arg1;
@property(readonly, nonatomic) _Bool hasKeychainTag;

@end
