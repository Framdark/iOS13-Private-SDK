//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CertInfo/CertInfoTrustDescription-Protocol.h>

@interface CertInfoBasicTrustDescription : NSObject <CertInfoTrustDescription>
{
    struct __SecTrust _trust;
    int _action;
}

- (id)_expirationDate;
- (id)certificatePropertiesAtIndex:(NSUInteger)arg1;
- (id)certificateExpirationDateAtIndex:(NSUInteger)arg1;
- (id)certificateIssuerSummaryAtIndex:(NSUInteger)arg1;
- (id)certificateSubjectSummaryAtIndex:(NSUInteger)arg1;
- (NSUInteger)certificateCount;
- (BOOL)isRootCertificate;
- (BOOL)isTrusted;
- (id)summaryDescriptionItems;
- (id)summarySubtitle;
- (id)summaryTitle;
- (void)dealloc;
- (id)initWithTrust:(struct __SecTrust )arg1 action:(int)arg2;

@end

