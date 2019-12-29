/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 10, 2019 at 4:04:05 AM Mountain Standard Time
* Operating System: Version 13.2 (Build 17K82)
* Image Source: /System/Library/TVSystemMenuModules/Audio Routing Module.bundle/Audio Routing Module
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Audio Routing Module/Audio Routing Module-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NSString, UIImage, _UIFloatingContentView, UIView, UIImageView, UILabel, NSMutableArray, TVNPRoutingMusicBarsView;

@interface TVNPBaseRoutingDestinationCollectionViewCell : UICollectionViewCell {

	BOOL _isFocused;
	BOOL _showDeviceImage;
	BOOL _enabled;
	NSString* _titleText;
	NSString* _subtitleText;
	UIImage* _artworkImage;
	unsigned long long _deviceType;
	unsigned long long _musicBarState;
	_UIFloatingContentView* _floatingContentView;
	UIView* _backgroundColorView;
	UIImageView* _artworkView;
	UIImageView* _deviceView;
	UIView* _shadowView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	NSMutableArray* _volatileContraints;
	TVNPRoutingMusicBarsView* _musicBarsView;
	CGRect _boundsUsedForArtworkShadow;

}

@property (nonatomic,readonly) _UIFloatingContentView * floatingContentView;              //@synthesize floatingContentView=_floatingContentView - In the implementation block
@property (nonatomic,readonly) UIView * backgroundColorView;                              //@synthesize backgroundColorView=_backgroundColorView - In the implementation block
@property (nonatomic,readonly) UIImageView * artworkView;                                 //@synthesize artworkView=_artworkView - In the implementation block
@property (nonatomic,readonly) UIImageView * deviceView;                                  //@synthesize deviceView=_deviceView - In the implementation block
@property (nonatomic,readonly) UIView * shadowView;                                       //@synthesize shadowView=_shadowView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;                                   //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled;                             //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) NSMutableArray * volatileContraints;                       //@synthesize volatileContraints=_volatileContraints - In the implementation block
@property (nonatomic,readonly) TVNPRoutingMusicBarsView * musicBarsView;                  //@synthesize musicBarsView=_musicBarsView - In the implementation block
@property (assign,nonatomic) CGRect boundsUsedForArtworkShadow;                           //@synthesize boundsUsedForArtworkShadow=_boundsUsedForArtworkShadow - In the implementation block
@property (nonatomic,copy) NSString * titleText;                                          //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * subtitleText;                                       //@synthesize subtitleText=_subtitleText - In the implementation block
@property (nonatomic,retain) UIImage * artworkImage;                                      //@synthesize artworkImage=_artworkImage - In the implementation block
@property (assign,nonatomic) BOOL showDeviceImage;                                        //@synthesize showDeviceImage=_showDeviceImage - In the implementation block
@property (assign,nonatomic) unsigned long long deviceType;                               //@synthesize deviceType=_deviceType - In the implementation block
@property (assign,nonatomic) unsigned long long musicBarState;                            //@synthesize musicBarState=_musicBarState - In the implementation block
+(void)_configureFloatingContentViewAppearance;
+(id)_iconImageForDeviceType:(unsigned long long)arg1 focused:(BOOL)arg2 ;
-(BOOL)isEnabled;
-(void)prepareForReuse;
-(unsigned long long)deviceType;
-(void)setDeviceType:(unsigned long long)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)titleText;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(NSString *)subtitleText;
-(void)setSubtitleText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(UILabel *)subtitleLabel;
-(void)updateConstraints;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(UIImage *)artworkImage;
-(void)setArtworkImage:(UIImage *)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(UIImageView *)artworkView;
-(_UIFloatingContentView *)floatingContentView;
-(UIView *)shadowView;
-(UIView *)backgroundColorView;
-(void)useFocusedAppearance;
-(void)setMusicBarState:(unsigned long long)arg1 ;
-(void)_addInitialConstraints;
-(void)_configureAppearanceForControlState:(unsigned long long)arg1 withAnimationCoordinator:(id)arg2 ;
-(unsigned long long)_controlStateForCell;
-(unsigned long long)musicBarState;
-(TVNPRoutingMusicBarsView *)musicBarsView;
-(NSMutableArray *)volatileContraints;
-(void)setShowDeviceImage:(BOOL)arg1 ;
-(BOOL)showDeviceImage;
-(UIImageView *)deviceView;
-(CGRect)boundsUsedForArtworkShadow;
-(void)setBoundsUsedForArtworkShadow:(CGRect)arg1 ;
@end

