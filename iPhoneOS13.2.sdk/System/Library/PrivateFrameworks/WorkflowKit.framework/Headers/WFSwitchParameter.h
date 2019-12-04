//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFParameter.h>

@class NSString;

@interface WFSwitchParameter : WFParameter
{
    NSString *_localizedOnDisplayName;
    NSString *_localizedOffDisplayName;
}

+ (id)defaultOffDisplayName;
+ (id)defaultOnDisplayName;
@property(readonly, nonatomic) NSString *localizedOffDisplayName; // @synthesize localizedOffDisplayName=_localizedOffDisplayName;
@property(readonly, nonatomic) NSString *localizedOnDisplayName; // @synthesize localizedOnDisplayName=_localizedOnDisplayName;
- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;

@end
