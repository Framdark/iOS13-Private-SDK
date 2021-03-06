//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSURL;

@interface AMSCardRegistrationResult : NSObject
{
    NSData *_cardData;
    NSURL *_brokerURL;
    NSURL *_paymentServicesURL;
}

@property(readonly, nonatomic) NSURL *paymentServicesURL; // @synthesize paymentServicesURL=_paymentServicesURL;
@property(readonly, nonatomic) NSURL *brokerURL; // @synthesize brokerURL=_brokerURL;
@property(readonly, nonatomic) NSData *cardData; // @synthesize cardData=_cardData;
// - (void).cxx_destruct;
- (id)initWithCardRegistrationResponse:(id)arg1;

@end

