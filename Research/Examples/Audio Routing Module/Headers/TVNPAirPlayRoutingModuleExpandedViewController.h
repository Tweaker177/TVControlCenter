/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 10, 2019 at 4:04:05 AM Mountain Standard Time
* Operating System: Version 13.2 (Build 17K82)
* Image Source: /System/Library/TVSystemMenuModules/Audio Routing Module.bundle/Audio Routing Module
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <Audio Routing Module/TVNPRoutingMainViewControllerDelegate.h>
#import <Audio Routing Module/TVSMModuleExpandedContentViewController.h>

@protocol TVSMModuleExpandedContentViewControllerDelegate;
@class TVNPGroupableRoutingController, TVNPRoutingMainViewController, NSString;

@interface TVNPAirPlayRoutingModuleExpandedViewController : UIViewController <TVNPRoutingMainViewControllerDelegate, TVSMModuleExpandedContentViewController> {

	id<TVSMModuleExpandedContentViewControllerDelegate> _delegate;
	TVNPGroupableRoutingController* _routingController;
	TVNPRoutingMainViewController* _routingViewController;

}

@property (nonatomic,readonly) TVNPRoutingMainViewController * routingViewController;                  //@synthesize routingViewController=_routingViewController - In the implementation block
@property (nonatomic,readonly) TVNPGroupableRoutingController * routingController;                     //@synthesize routingController=_routingController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<TVSMModuleContentViewControllerDelegate> delegate; 
-(id<TVSMModuleContentViewControllerDelegate>)delegate;
-(void)setDelegate:(id<TVSMModuleContentViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(TVNPGroupableRoutingController *)routingController;
-(id)initWithRoutingController:(id)arg1 ;
-(void)viewControllerDidRequestDismissal:(id)arg1 cancelled:(BOOL)arg2 ;
-(TVNPRoutingMainViewController *)routingViewController;
@end

