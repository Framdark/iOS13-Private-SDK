//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface OTSponsorToApplicantRound2M2 : PBCodable <NSCopying>
{
    NSMutableArray *_preapprovedKeys;
    NSData *_voucher;
    NSData *_voucherSignature;
}

+ (Class)preapprovedKeysType;
@property(retain, nonatomic) NSMutableArray *preapprovedKeys; // @synthesize preapprovedKeys=_preapprovedKeys;
@property(retain, nonatomic) NSData *voucherSignature; // @synthesize voucherSignature=_voucherSignature;
@property(retain, nonatomic) NSData *voucher; // @synthesize voucher=_voucher;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)preapprovedKeysAtIndex:(unsigned long long)arg1;
- (unsigned long long)preapprovedKeysCount;
- (void)addPreapprovedKeys:(id)arg1;
- (void)clearPreapprovedKeys;
@property(readonly, nonatomic) _Bool hasVoucherSignature;
@property(readonly, nonatomic) _Bool hasVoucher;

@end
