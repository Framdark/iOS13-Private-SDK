//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface AACertificatePinner : NSObject <NSURLConnectionDelegate, NSURLSessionDelegate>
{
}

+ (BOOL)isValidCertificateTrust:(struct __SecTrust )arg1;
+ (BOOL)isSetupServiceHost:(id)arg1;
+ (id)sharedPinner;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;

@end

