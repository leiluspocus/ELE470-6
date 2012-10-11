//
//  BIDDoubleComponentPickerViewController.h
//  Pickers
//
//  Created by Laïla Atrmouh on 09/10/12.
//  Copyright (c) 2012 URI. All rights reserved.
//

#import <UIKit/UIKit.h>

#define kFillingComponent 0
#define kBreadComponent 1

@interface BIDDoubleComponentPickerViewController : UIViewController <UIPickerViewDelegate, UIPickerViewDataSource>

@property (strong, nonatomic) IBOutlet UIPickerView *doublePicker;
@property (strong, nonatomic) NSArray *fillingTypes;
@property (strong, nonatomic) NSArray *breadTypes;

-(IBAction)buttonPressed;

@end
