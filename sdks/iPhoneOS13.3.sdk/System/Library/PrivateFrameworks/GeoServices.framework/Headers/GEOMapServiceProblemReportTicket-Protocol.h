//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOMapServiceCancellableTicket-Protocol.h>

@class GEOMapServiceTraits;

@protocol GEOMapServiceProblemReportTicket <GEOMapServiceCancellableTicket>
@property(readonly, nonatomic) GEOMapServiceTraits *traits;
- (void)cancel;
- (void)submitWithHandler:(void (^)(NSString *, NSData *, NSError *))arg1 networkActivity:(void (^)(BOOL))arg2;
@end

