//
//  sumoGameLayer.h
//  ChickenFight2011
//
//  Created by Lozen on 11/10/28.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"
#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <CoreAudio/CoreAudioTypes.h>
#import "save_ChickenData.h"

@interface sumoGameLayer : CCLayer {
    
    CGSize screenSize;
    AVAudioRecorder *recorder;
    NSTimer *levelTimer;
    double_t lowPassResults;
    NSInteger highValue;
    UILabel *level;
    CCSprite *bg;
    CCSprite *sumo_com_push;
    CCSprite *sumo_com_ready;
    CCSprite *sumo_user_ready;
    CCSprite *sumo_user_ready2;
    CCSprite *sumo_user_push;
    
    CCSprite *voiceLine_r;
    CCSprite *voiceLine_com_r;
    
    CCLabelTTF *score1;
    CCLabelTTF *score2;
    CCLabelTTF *timeTest;
    CCLabelTTF *time30;
    CCLabelTTF *dis;
    CCLabelTTF *gameResult;
    CCBlink *gameResultBlink;
    
    int i;
    int distancePointer;
    CCSprite *animatingChicken;
    CCMenu *playAgainMenu;
    
}

-(void)initWithPlay;
-(void)levelTimerCallback:(NSTimer *)timer;
-(void)blowStart;
-(void)timesUp;
-(void)playSumoAgain:(id)sender;
-(void)backToGameMenu:(id)sender;

// returns a CCScene that contains the HelloWorldLayer as the only child
+(CCScene *) scene;
-(void) winOrLose:(int)sender;
-(CCNode *)countdown;

@end
