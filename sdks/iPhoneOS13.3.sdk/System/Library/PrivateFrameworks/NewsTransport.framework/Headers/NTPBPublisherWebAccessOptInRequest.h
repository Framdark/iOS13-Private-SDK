//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>


@class NSString;

@interface NTPBPublisherWebAccessOptInRequest : PBRequest <NSCopying>
{
    NSString *_channelId;
    NSString *_country;
    NSString *_email;
    NSString *_iapId;
    NSString *_language;
    NSString *_purchaseReceipt;
}

@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSString *iapId; // @synthesize iapId=_iapId;
@property(retain, nonatomic) NSString *purchaseReceipt; // @synthesize purchaseReceipt=_purchaseReceipt;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasCountry;
@property(readonly, nonatomic) BOOL hasLanguage;
@property(readonly, nonatomic) BOOL hasIapId;
@property(readonly, nonatomic) BOOL hasPurchaseReceipt;
@property(readonly, nonatomic) BOOL hasEmail;
@property(readonly, nonatomic) BOOL hasChannelId;

@end

