//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXAutoPlacementLayout-Protocol.h>

@protocol SXEdgeSpacing;

@interface SXDebugAdLayout : NSObject <SXAutoPlacementLayout>
{
    id <SXEdgeSpacing> _margin;
}

@property(readonly, nonatomic) id <SXEdgeSpacing> margin; // @synthesize margin=_margin;
// - (void).cxx_destruct;
- (id)initWithMargin:(struct _SXConvertibleValue)arg1;

@end

