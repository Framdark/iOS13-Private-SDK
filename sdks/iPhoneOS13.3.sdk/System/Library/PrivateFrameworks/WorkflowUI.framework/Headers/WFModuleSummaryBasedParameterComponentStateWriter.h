//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowUI/WFModuleParameterStateWriter-Protocol.h>

@interface WFModuleSummaryBasedParameterComponentStateWriter : NSObject <WFModuleParameterStateWriter>
{
    id /* CDUnknownBlockType */ _updateBlock;
}

@property(readonly, nonatomic) id /* CDUnknownBlockType */ updateBlock; // @synthesize updateBlock=_updateBlock;
// - (void).cxx_destruct;
- (BOOL)setState:(id)arg1 ofParameter:(id)arg2;
- (id)initWithUpdateBlock:(id /* CDUnknownBlockType */)arg1;

@end

