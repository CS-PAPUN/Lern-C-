username = input("กรุณาใส่ชื่อผู้ใช้: ")
initial_points = 50000.543
print(f"\nคะแนนปัจจุบันของคุณ: {initial_points:,.3f} คะแนน")
redeem_points = float(input("กรุณาใส่จำนวนคะแนนที่ต้องการแลก: "))
if redeem_points > initial_points:
    print("\nคะแนนไม่เพียงพอในการแลก!")
else:
    remaining_points = initial_points - redeem_points
    print("\n===== สรุปการแลกคะแนน =====")
    print(f"ชื่อผู้ใช้        : {username}")
    print(f"คะแนนเดิม        : {initial_points:,.3f} คะแนน")
    print(f"คะแนนที่แลก      : {redeem_points:,.3f} คะแนน")
    print(f"คะแนนคงเหลือ     : {remaining_points:,.3f} คะแนน")
    print("===========================")