//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOAbstractRequestResponseTicket.h>

#import <GeoServices/GEOMapServiceBatchNearbyTicket-Protocol.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _GEOBatchPopularNearbyTicket : GEOAbstractRequestResponseTicket <GEOMapServiceBatchNearbyTicket>
{
    NSArray *_categories;
}

// - (void).cxx_destruct;
- (id)resultSectionHeaderForCategory:(id)arg1;
- (void)submitWithHandler:(id /* CDUnknownBlockType */)arg1 auditToken:(id)arg2 networkActivity:(id /* CDUnknownBlockType */)arg3;
- (void)submitWithHandler:(id /* CDUnknownBlockType */)arg1 networkActivity:(id /* CDUnknownBlockType */)arg2;
- (id)initWithRequest:(id)arg1 traits:(id)arg2 categories:(id)arg3;

@end

