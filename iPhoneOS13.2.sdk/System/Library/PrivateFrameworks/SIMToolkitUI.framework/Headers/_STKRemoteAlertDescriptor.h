//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BSAction, NSString, STKSessionAction;

@interface _STKRemoteAlertDescriptor : NSObject
{
    NSString *_serviceIdentifier;
    NSString *_viewControllerName;
    STKSessionAction *_action;
    BSAction *_BSAction;
}

@property(readonly, nonatomic) BSAction *BSAction; // @synthesize BSAction=_BSAction;
@property(readonly, nonatomic) STKSessionAction *action; // @synthesize action=_action;
@property(readonly, copy, nonatomic) NSString *viewControllerName; // @synthesize viewControllerName=_viewControllerName;
@property(readonly, copy, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
- (id)debugDescription;
- (id)description;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (id)initWithAction:(id)arg1 viewControllerName:(id)arg2;

@end
